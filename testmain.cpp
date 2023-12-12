#if 0

#include"gtest/gtest.h"
#include"90_rotate.cpp"
#include"180_rotate.cpp"
#include"add.cpp"
#include"main.h"

TEST(common, rotate_90)
{
	int arr1[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	rotate90(arr1);

	EXPECT_EQ(arr1[0][0], 7);
	EXPECT_EQ(arr1[0][1], 4);
	EXPECT_EQ(arr1[0][2], 1);
	EXPECT_EQ(arr1[1][0], 8);
	EXPECT_EQ(arr1[1][1], 5);
	EXPECT_EQ(arr1[1][2], 2);
	EXPECT_EQ(arr1[2][0], 9);
	EXPECT_EQ(arr1[2][1], 6);
	EXPECT_EQ(arr1[2][2], 3);
}

TEST(common, rotate_180)
{
	int arr2[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	rotate180(arr2);

	EXPECT_EQ(arr2[0][0], 9);
	EXPECT_EQ(arr2[0][1], 8);
	EXPECT_EQ(arr2[0][2], 7);
	EXPECT_EQ(arr2[1][0], 6);
	EXPECT_EQ(arr2[1][1], 5);
	EXPECT_EQ(arr2[1][2], 4);
	EXPECT_EQ(arr2[2][0], 3);
	EXPECT_EQ(arr2[2][1], 2);
	EXPECT_EQ(arr2[2][2], 1);
}

TEST(common, add)
{
	int arr1[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	int arr2[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	add(arr1, arr2);

	EXPECT_EQ(arr1[0][0], 2);
	EXPECT_EQ(arr1[0][1], 4);
	EXPECT_EQ(arr1[0][2], 6);
	EXPECT_EQ(arr1[1][0], 8);
	EXPECT_EQ(arr1[1][1], 10);
	EXPECT_EQ(arr1[1][2], 12);
	EXPECT_EQ(arr1[2][0], 14);
	EXPECT_EQ(arr1[2][1], 16);
	EXPECT_EQ(arr1[2][2], 18);
}


int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
#enif
