// from server: 24% by atomic.potato
struct S
{
    void f(int value);
    int value;
};

void S::f(int value)
{
    this->value = value;
}
