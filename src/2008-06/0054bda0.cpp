// from server: 42% by atomic.potato
struct S
{
    void f(int);
    void __thiscall g(int, int);
};

void S::f(int value)
{
    g(1, value);
}
