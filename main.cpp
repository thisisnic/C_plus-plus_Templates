#include <iostream>
#include <string>

using namespace std;

/* 
This isn't an actual function; at compile time, the relevant fucntions get created based on how it's used!
*/
template<typename T> // declaring the function below is a template which gets evaluated at compile time
void Print(T value){ 
    cout << value << endl;
}


/* 
This is how we use templates with classes.
*/
template<int N>
class Array{
    private: 
        int m_Array[N];
    public:
        int GetSize() const {return N;}

};

/*
Using class template but this time define both type and size
*/
template<typename T, int N>
class Array2{
    private: 
        T m_Array[N];
    public:
        int GetSize() const {return N;}
};


int main(){

    // Using function template
    Print("Hey there!");
    Print<int>(123); // we can specify the type but it's only optional
    Print(123); // 
    Print<float>(456);

    //Using class template
    Array<5> array; // literally creates a class where instead of 'N' we have 5.
    cout << "Array size: " << array.GetSize() << endl;

    //Using class template with type and size
    Array2<string, 15> array2; 
    cout << "Array size: " << array2.GetSize() << endl;

    return 0;
}

