// from server: 87% by atomic.potato
typedef void (__cdecl *Fn)(void *, void *);

extern "C" void __cdecl func_007f3c14(void *, void *);
extern Fn g_func_0098de5c;

struct S
{
    void f(void *);
};

void S::f(void *p)
{
    *(int *)((char *)this + 0x90) = 1;
    func_007f3c14(this, p);
    g_func_0098de5c((char *)this + 0x7c, p);
    *(int *)((char *)this + 0x90) = 0;
}
