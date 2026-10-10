// from server: 10% by atomic.potato
struct S
{
    void f(int, int, int);
};

void S::f(int, int, int type)
{
    if (type == 4)
        return;
}
