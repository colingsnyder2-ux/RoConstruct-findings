// from server: 13% by atomic.potato
struct S
{
    int f(int, int, int);
    void g(int);
    void h(int, int, int);
    char data[0x260];
};

void S::g(int value)
{
}

void S::h(int a, int b, int c)
{
}

int S::f(int a, int b, int c)
{
    g(0);
    h(a, b, c);
    return 0;
}
