add_executable(CPP_AUTOGRADED
        test_student_code.cpp
)

target_link_libraries(CPP_AUTOGRADED
        GTest::gtest_main
        student_code
)

include(GoogleTest)
gtest_discover_tests(CPP_AUTOGRADED)
