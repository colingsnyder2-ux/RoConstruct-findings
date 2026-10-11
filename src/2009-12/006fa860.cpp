// from server: 34% by atomic.potato
extern "C" void* __cdecl fn460e60(int, int, int, int);
extern "C" void fn6f8610(void*, int, int, int);

struct S
{
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    void* p = fn460e60(0, 0, 0, 0);
    fn6f8610(p, c, b, a);
    return a;
}
