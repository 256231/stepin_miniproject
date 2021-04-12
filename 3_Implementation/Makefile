#PROJECT_NAME = Electrical\
SRC = main.c\
src\bill.c\
src\motor.c\
src\transformer.c
#INC = inc 

#$(PROJECT_NAME) : $(SRC)
#	gcc -I $(INC) $(SRC) -o $(PROJECT_NAME).exe

#run: $(PROJECT_NAME)
#	$(PROJECT_NAME).exe

#clean:
#	del /q *.exe
PROJ_NAME = Electrical


SRC =main.c\
src\bill.c\
src\motor.c\
src\transformer.c


INC= inc


ifdef OS
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC) $(SRC)  -o $(PROJ_NAME).$(EXEC)
	
run:
	$(PROJ_NAME).$(EXEC)
#test:
#	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(TEST_PROJ_NAME).$(EXEC)

cppcheck:
	cppcheck --enable=all $(SRC)
debug:
	gcc -I $(INC) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(PROJ_NAME).$(EXEC)


clean:
	del *.DAT
	del *.$(EXEC)