// MainApp_Test.c

// 1. Include section
#include "MainApp_Test.h"

// 2. Prototype section
extern int test_SysInitModule_BareMetalBlock_Hardware_runner(void);
extern void UnitySummary(void);

// Main application test runner
int MainApp_Test(void)
{
	UnitySummary();
	test_SysInitModule_BareMetalBlock_Hardware_runner();
	return(0);
}

