PROJECT_NAME = complement
TEST_PROJECT_NAME = Test_$(PROJECT_NAME)
BUILD_DIR = Build
SRC = src/complement.c src/addOne.c	src/countDigits.c src/checkInput.c	
 
INC_T = -IUnity -Itest 
INC_H = -Iinc
      
TEST_SRC = test/test_main.c test/main_test.c Unity/unity.c

ifdef OS
	RM = del/q
	FixPath = $(subst /,\,$1)
	EXEC = exe

else
	ifeq ($(shell uname), Linux)
	      RM = rm -rf
	      FixPath = $1
		  EXEC = out
	 endif
 endif
.PHONY: run clean test doc all

all:$(BUILD_DIR)
	gcc $(INC_H) $(SRC) main.c -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
 
run: 	
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
	
test:
	gcc $(INC_H) $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	./$(call FixPath,$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC))
	
$(BUILD_DIR):
	mkdir $(BUILD_DIR)
	
cppcheck:
	cppcheck --enable=all $(SRC) main.c

valgrind:
	valgrind ./$(BUILD_DIR)/$(TEST_PROJECT_NAME).$(EXEC)

clean:
	$(RM) $(call FixPath, $(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)
