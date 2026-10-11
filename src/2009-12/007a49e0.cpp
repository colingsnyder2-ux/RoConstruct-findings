// from server: 47% by atomic.potato
extern "C" void *__cdecl fn_0069b880(int, int, int, int);

struct T
{
    void f(int, int, int);
};

void fn_007a48a0(void *, int, int, int);

void T::f(int a, int b, int c)
{
    void *p = fn_0069b880(0, 0, 0, 0);
    fn_007a48a0(p, a, b, c);
}
