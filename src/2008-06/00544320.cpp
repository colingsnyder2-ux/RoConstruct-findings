// from server: 41% by atomic.potato
struct S
{
    int* value;
    void assign(int);
    S& f(int*);
};

void S::assign(int value)
{
    *this->value = value;
}

S& S::f(int* other)
{
    *this->value = 0;
    assign(*other);
    return *this;
}
