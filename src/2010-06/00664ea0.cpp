// from server: 34% by atomic.potato
struct S
{
    int f(int a, int b, int c);
};

extern "C" void* __cdecl fn4664d0(int, int, int, int);
extern "C" void fn662cc0(void*, int, int, int);

int S::f(int a, int b, int c)
{
    void* p = fn4664d0(0, 0, 0, 0);
    fn662cc0(p, c, b, a);
    return a;
}
