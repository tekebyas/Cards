main:
	@g++ -o main *.cpp -std=c++11
run: main
	@echo "Running:"
	@./main
edit:
	@vim main.cpp
clean: main
	@rm main
