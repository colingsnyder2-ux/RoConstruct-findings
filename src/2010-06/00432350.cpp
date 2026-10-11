// from server: 60% by atomic.potato
struct S
{
    int f(int a, int b, int c);
};

extern "C" void* fn4322b0(void*);
extern "C" void fn432170(void*, int, int, int);

int S::f(int a, int b, int c)
{
    void* p = fn4322b0(0);
    fn432170(p, a, b, c);
    return a;
}
