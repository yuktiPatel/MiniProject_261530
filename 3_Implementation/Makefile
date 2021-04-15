PROJECT_NAME = complement
BUILD_DIR = Build
SRC = main_test.c src/complement.c src/addOne.c	src/countDigits.c test/test_main.c src/checkInput.c	
 
INC = -IUnity -Itest -Iinc
      

TEST = Unity/unity.c

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
	gcc $(INC) $(SRC) $(TEST) -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
 
run: 	
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))
	
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath, $(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)

