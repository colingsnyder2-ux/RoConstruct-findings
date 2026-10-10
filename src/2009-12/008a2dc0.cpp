// from server: 69% by atomic.potato
struct S
{
    int f(int);
    int g(int);
    void h(int);
};

void S::h(int value)
{
    if (f(value) < 0)
        g(value);
}
