#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

PROJ_NAME = phonebook
TEST_PROJ_NAME = $(PROJ_NAME)

BUILD_DIR = Build

SRC = src/addrecord.c src/back.c src/delete.c src/listr.c src/main.c src/menu.c src/modify.c src/search.c src/start.c 
SRC1 = src/addrecord.c src/back.c src/delete.c src/listr.c src/menu.c src/modify.c src/search.c src/start.c
INC = inc/phonebook.h\
unity/unity.h unity/unity_internals.h


TEST_SRC = testfile/test_phonebook.c\
unity/unity.c



all: $(SRC) $(BUILD_DIR)
	gcc $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

testing: $(TEST_SRC) $(SRC1)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

valgrind :
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).out)

analysis: all
	cppcheck --enable=all $(SRC)
	valgrind --leak-check=full $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC1) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC1)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*) *.gcda *.gcno *.gcov
