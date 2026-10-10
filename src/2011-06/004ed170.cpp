// from server: 83% by atomic.potato
struct S
{
    int value;
    void f();
};

void S::f()
{
    int x = value;
    value = x - ((x - 1) & 7) + 7;
}
