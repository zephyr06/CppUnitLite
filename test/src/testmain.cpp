#include <iostream>
#include <string>

#include "../CppUnitLite/TestHarness.h"

using namespace std;


TEST(Stack, creation)
{
    CHECK_EQUAL("a", "a");
}

int main()
{
    TestResult tr;
    TestRegistry::runAllTests(tr);

    return 0;
}


