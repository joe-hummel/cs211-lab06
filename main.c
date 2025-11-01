#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtest/gtest.h>

int main()
{
    ::testing::InitGoogleTest();

    //
    // run all the tests, returns 0 if they
    // all pass and 1 if any fail:
    //
    int result = RUN_ALL_TESTS();

    return result;
}

