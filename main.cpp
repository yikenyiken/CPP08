#include <iostream>

using namespace std;

template<typename T>
class base
{
    protected:
    T c;
    public:
    base(T c) : c(c) {}
};


template<typename T>
class derived : public base<T>
{
    public:
    derived(int c) : base<T>(c) {}

    void    dump()
    {
        cout << this->c << endl;
    }
};

int main() {
    
    derived<int> f(12);

    f.dump();

    return 0;
}