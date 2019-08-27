build:
	g++ -c "src/library.cpp" -o "./build/library.o" \
	g++ -c "src/book.cpp" -o "./build/book.o" \
	g++ -c "src/reader.cpp" -o "./build/reader.o" \
	g++ -c "src/main.cpp" -o "./build/main" \
	g++ "build/reader.o" "build/book.o" "build/library.o" "build/main" -o "src/main" 
run:
	./src/main