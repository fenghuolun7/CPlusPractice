vpath %.cpp src
vpath %.h include

main.o:main.o student.o
	g++ $@ -o $<
main.o:main.cpp student.cpp
	g++ $^ -o $@

#g++ main.cpp student.cpp -Iinclude -Llib -lstudent -o -sharemain
#g++ main.cpp -Iinclude -Lsrc -lSwap -o sharemain

l