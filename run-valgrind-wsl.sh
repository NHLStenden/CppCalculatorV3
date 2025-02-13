# How to get this to work:
#  1. install WSL (Windows Subsystem for Linux)  and start it with 'wsl'.
#  2. install g++ and make via sudo 'apt install g++ make'
#  3. download a binary for cmake: https://cmake.org/download/
#  4. run cmake shell-script or extract manually
#  5. remember path of extract cmake
#  6. go to folder <project>/cmake-wsl (if this folder does not exist, create it using 'mkdir cmake-wsl'.
#  7. run cmake: '/mnt/c/path/to/cmake/bin/cmake ..'
#  8. this will create a 'makefile' so run 'make' in the folder cmake-wsl
#  9. go back to main project folder and run this script
# 10. inspect the valgrind logfile in 'valgrind.log'

cd cmake-wsl
valgrind --leak-check=full --leak-resolution=med --track-origins=yes --vgdb=no ./calculator_v3 2> valgrind.log
