// test_SysInitModule_BareMetalBlock_Hardware_runner.c

//=======Test Runner Used To Run Each Test Below=====

#define RUN_TEST(TestFunc) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "../../../unity/unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_SysInitModule_BareMetalBlock_Hardware_TestIf_OneIsEqual_ToTwo(void);
extern void test_SysInitModule_BareMetalBlock_Hardware_TestIf_ThreeIsEqual_ToThree(void);
extern void test_SysInitModule_BareMetalBlock_Hardware_TestIf_TestIsIgnored_WithMessage(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int test_SysInitModule_BareMetalBlock_Hardware_runner(void)
{
  UnityBegin("test_SysInitModule_BareMetalBlock_Hardware.c");
  RUN_TEST(test_SysInitModule_BareMetalBlock_Hardware_TestIf_OneIsEqual_ToTwo);
  RUN_TEST(test_SysInitModule_BareMetalBlock_Hardware_TestIf_ThreeIsEqual_ToThree);
  RUN_TEST(test_SysInitModule_BareMetalBlock_Hardware_TestIf_TestIsIgnored_WithMessage);
  return (UnityEnd());
}
