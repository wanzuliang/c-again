# by	wanzuliang
# bulid	2016-12-22-21:00
# edit	2016-12-22-21:03
#
# 注意行中的 TAB 键
# Makefile 有三个非常有用的变量.分别是$@,$^,$<
# 代表的意义分别是:
#	$@--目标文件,
#	$^--所有的依赖文件,
#	$<--第一个依赖文件.
# make
main: main.o mytool1.o mytool2.o
	gcc -o $@ $^	# main
					# main.o mytool1.o mytool2.o
main.o: main.c mytool1.h mytool2.h
	gcc -c $<	# main.c
mytool1.o: mytool1.c mytool1.h
	gcc -c $<	# mytool1.c
mytool2.o: mytool2.c
	gcc -c $^	# mytool2.c

clean:			# make clean
	rm *.o main

# 这是再一次简化后的 Makefile
#
# main: main.o mytool1.o mytool2.o
# 	gcc -o $@ $^
# ..c.o:
# 	gcc -c $<
#

# ..c.o:
# 这个规则表示所有的 .o 文件都是依赖与相应的.c 文件的.
# 例如 mytool.o 依赖于 mytool.c
