#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

enum Color{Yellow, Red, Green};

class fructs{
protected:
    double _size;
    double _weight;
    Color _color;
    bool _status;

    void get_info(){
        std::cout << "Size = " << _size << std::endl;
        std::cout << "Weight = " << _weight << std::endl;
        std::cout << "Color = ";
        switch (_color)
        {
        case 0: std::cout << "Yellow" << std::endl; break;
        case 1: std::cout << "Red" << std::endl; break;
        case 2: std::cout << "Green" << std::endl; break;
        }
    }

    void bite(){
        if (!_status){
            std:: cout << "Apple doesn't exist";
            return;
        }
        _size = _size - 2;
        _weight = _weight - 20;
        if (_size <= 0 || _weight <= 0){
            _status = false;
        }
    }
public:

};