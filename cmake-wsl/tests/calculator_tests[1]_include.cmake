if(EXISTS "/mnt/c/sources/NHLS/CppCalculatorVersions/CppCalculator_v3/cmake-wsl/tests/calculator_tests[1]_tests.cmake")
  include("/mnt/c/sources/NHLS/CppCalculatorVersions/CppCalculator_v3/cmake-wsl/tests/calculator_tests[1]_tests.cmake")
else()
  add_test(calculator_tests_NOT_BUILT calculator_tests_NOT_BUILT)
endif()
