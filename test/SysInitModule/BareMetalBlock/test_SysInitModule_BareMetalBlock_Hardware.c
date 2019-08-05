// test_SysInitModule_BareMetalBlock_Hardware.c

// 1. Include section
#include "../../../unity/unity.h"
#include "stdbool.h"
#include "stdint.h"

#include "../../../src/SysInitModule/BareMetalBlock/SysInitModule_BareMetalBlock_Hardware.h"

// 2. Functions declaration section
// 2.1. Sets up the test environment
void setUp(void)
{

}

// 2.2. Finishes the test environment
void tearDown(void)
{

}

// 2.3. Check if one is equal to two
void test_SysInitModule_BareMetalBlock_Hardware_TestIf_OneIsEqual_ToTwo(void)
{
	uint32_t ui32_ExpectedValue = 2;
	uint32_t ui32_ActualValue = 1;
	TEST_ASSERT_EQUAL_UINT32(ui32_ExpectedValue, ui32_ActualValue);
}

// 2.4. Check if three is equal to three
void test_SysInitModule_BareMetalBlock_Hardware_TestIf_ThreeIsEqual_ToThree(void)
{
	uint32_t ui32_ExpectedValue = 3;
	uint32_t ui32_ActualValue = 3;
	TEST_ASSERT_EQUAL_UINT32(ui32_ExpectedValue, ui32_ActualValue);
}

// 2.5. Text with ignore message only
void test_SysInitModule_BareMetalBlock_Hardware_TestIf_TestIsIgnored_WithMessage(void)
{
	TEST_IGNORE_MESSAGE("Must write a test here!");
}
