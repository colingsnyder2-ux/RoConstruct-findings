// from server: 95% by atomic.potato
struct S
{
    void f(int* p);
};

void S::f(int* p)
{
    p[0] = 0x124;
    p[1] = 0x24;
}
