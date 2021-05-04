REM compile 3 .c files into .o files
C:\gbdk\bin\lcc -c -o main.o main.c
C:\gbdk\bin\lcc -c -o LaroldsJubilantJunkyard_map.o LaroldsJubilantJunkyard_map.c
C:\gbdk\bin\lcc -c -o LaroldsJubilantJunkyard_data.o LaroldsJubilantJunkyard_data.c

REM Compile a .gb file from the compiled .o files
C:\GBDK\bin\lcc  -o Example.gb main.o LaroldsJubilantJunkyard_map.o LaroldsJubilantJunkyard_data.o

REM delete intermediate files created for the conmpilation process
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
