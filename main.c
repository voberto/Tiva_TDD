// Main file for Tiva_TDD project

// 1. Include section
#include <stdio.h>

#include "diag/Trace.h"

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

#include "unity/unity_internals.h"
#include "unity/unity.h"

extern void initialise_monitor_handles(void);

#ifdef RELEASE
#include "src/MainApp_Release/MainApp_Release.h"
#endif

#ifdef TEST
#include "src/MainApp_Test/MainApp_Test.h"
#endif

// 2. Functions declaration section
// 2.1. Main app function
void MainApp(void)
{
#ifdef RELEASE
	MainApp_Release();
#endif

#ifdef TEST
	MainApp_Test();
#endif
}

// 2.2. Minimal hardware startup function to enable testing
void Tiva_TDD_MinimalStartup(void)
{
	// Clock at 80 MHz
	SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);
	SysCtlDelay(200000);			// To ensure proper setup of core and peripherals;
	initialise_monitor_handles(); 	/* initialize handles */
	SysCtlDelay(200000);			// To ensure that all is configured and running before the tests begin
}

// Main
int main()
{
	Tiva_TDD_MinimalStartup();
	MainApp();		// Main application;
}

// ----------------------------------------------------------------------------
