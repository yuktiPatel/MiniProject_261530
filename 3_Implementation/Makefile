PROJECT_NAME = complement.out
SRC = main_test.c src/complement.c src/addOne.c	src/countDigits.c test/test_main.c	
 
INC = -IUnity -Itest -Iinc
      

TEST = Unity/unity.c

$(PROJECT_NAME) : $(SRC) $(TEST)
	gcc $(INC) $(SRC) $(TEST) -o complement.out
 
run: $(PROJECT_NAME)	
	./$(PROJECT_NAME)
 
clean:
	rm -rf *.out

