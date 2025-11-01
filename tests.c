/*tests.c*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtest/gtest.h>

#include "mystrcmp.h"

TEST(strchr, finds_first_occurrence)
{
  char* s = "apple";
  char  c = 'p';

  char* result = strchr(s, c);

  ASSERT_EQ(result, &s[1]);
}

TEST(strchr, not_found)
{
  char* s = "apple";
  char  c = 'g';

  char* result = strchr(s, c);

  ASSERT_TRUE(result == NULL);  // ASSERT_EQ(result, NULL) doesn't work
}
