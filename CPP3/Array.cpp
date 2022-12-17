#include <iostream>
#include <cmath>
using namespace std;

template<class T>
class Array {
    int size;
public:
    T* arr;
    Array(){
        size = 0;
        arr = nullptr;
    }
    ~Array(){
        for(int i =0; i< size; i++){
            delete arr[i];
        }
        delete[] arr;
        size = 0;
    }
    void add(T& ob){
        arr[size] =

    }

};
