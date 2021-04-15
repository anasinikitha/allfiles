

all.exe:test.c windows.c gotocoordinate.c
	gcc test.c windows.c gotocoordinate.c -o all.exe

run:all.exe
	all.exe