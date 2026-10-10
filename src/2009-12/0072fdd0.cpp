// from server: 10% by atomic.potato
extern "C" void target();

struct S
{
    void f(int, int, int);
};

void S::f(int, int, int)
{
}
