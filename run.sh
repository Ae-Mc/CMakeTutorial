mkdir build
cmake -H. -Bbuild
cd build
make
cd ..
./CMakeHello
rm CMakeHello
