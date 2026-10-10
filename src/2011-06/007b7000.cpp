// from server: 5% by atomic.potato
struct S
{
    void f(int, int);
};

void S::f(int a, int b)
{
    int x = 0;
    char y = 0;
    f(x, y);
}
