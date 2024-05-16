#include "fructs.h"

enum Color{Yellow, Red, Green};

class Apple: protected fructs{
private:

public:
    Apple() = delete;

    Apple(double size, double weight, Color color){
        _size = size;
        _weight = weight;
        _color = static_cast<Color>(rand()%3);
        _status = true;
    }



};