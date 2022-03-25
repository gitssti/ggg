#include "gtest/gtest.h"
#include "..\ForTesting\point.h"

TEST(Point, DistanceTests) {
	EXPECT_DOUBLE_EQ(Point(0, 0).distance_to(Point(0, 1)), 1);  //EXPECT_NEAR(val1,val2,abs_error) Проверяет, что разница между val1и val2не превышает границы абсолютной ошибки abs_error
	EXPECT_DOUBLE_EQ(Point(0, 0).distance_to(Point(0, 0)), 0); 
	EXPECT_DOUBLE_EQ((Point(2, 4).distance_to(Point(3, 5)) - 1.4142), 0.0001);
	EXPECT_NEAR(Point(0, 3).distance_to(Point(4, 2)), 4.1231, 0.0001);
}


int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}



