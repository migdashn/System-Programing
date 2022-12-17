/* Assignment C++: 2
Author: Nathan Migdashiev, ID: 316147719
*/


#ifndef UNTITLED3_ARRAY_H
#define UNTITLED3_ARRAY_H
#include <iostream>
using namespace std;


template<class T>
class Array {
protected:
    int size;
public:
    T *arr;
    Array() : size(0), arr(nullptr){}

    ~Array(){
        for (int i = 0; i < size; ++i) {
            delete arr[i];
        }
        delete[] arr;
        size = 0;
    }

    void add(T &obj){
        T* tempArr = new T[size +1];   //new bigger array
        if(arr != nullptr){             //if the old array is not empty copy shapes
            for (int i = 0; i < size; ++i) {
                tempArr[i] = arr[i];
            }
        }
        tempArr[size] = obj;               //creating a new array with one shape at the end and size +1 and deleting the old one
        size++;
        arr = new T[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = tempArr[i];
        }
        delete tempArr;
    }


    void remove(int index){
        if(size != 0) {
            T *tempArr = new T[size - 1];
            for (int i = 0; i < index ; ++i) {
                tempArr[i] = arr[i];
            }
            for (int i = index; i < size -1; ++i) {
                tempArr[i] = arr[i + 1];
            }
            size--;
            arr = new T[size];
            for (int i = 0; i < size; ++i) {
                arr[i] = tempArr[i];
            }
            delete tempArr;
        }
    }

    int getSize(){
        return size;
    }

    friend ostream& operator<<(ostream& os, Array<T>& array){
        for (int i = 0; i < array.size; ++i) {
            os << array[i]<< " ";
        }
        return os;
    }

    T& operator[](const int index) {
        return arr[index];
    }

};



#endif //UNTITLED3_ARRAY_H
