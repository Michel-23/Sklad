#include "fructs.h"

enum Color{Yellow, Red, Green};

class Apple: protected fructs{
private:

public:
    Apple(){
        _size = 5 + rand()%10;
        _weight = 100 + rand()%50;
        _color = static_cast<Color> (rand()%3);
        _status = true;
    }

    Apple(double size, double weight, Color color){
        _size = size;
        _weight = weight;
        _color = color;
        _status = _status;        
    }


    
};