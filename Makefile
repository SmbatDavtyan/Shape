EXE:=exe

$(EXE): circle.cpp main.cpp rectangle.cpp shape.cpp triangle.cpp circle.h point.h rectangle.h shape.h triangle.h
	g++ $^ -o $@

clean:
	rm $(EXE)




