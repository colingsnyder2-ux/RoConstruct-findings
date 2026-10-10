// from server: 75% by atomic.potato
struct S
{
    void f();
    int m[81];
};

extern "C" void __cdecl sub_9266ac();

struct V
{
    void (__thiscall *f[14])(void *);
};

struct T
{
    V *v;
};

void S::f()
{
    sub_9266ac();
    T *p = *(T **)((char *)this + 0x144);
    p->v->f[13](this);
}
