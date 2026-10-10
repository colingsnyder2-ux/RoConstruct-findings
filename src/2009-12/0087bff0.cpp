// from server: 85% by atomic.potato
extern "C" int __stdcall sub_87bf80(void *);

struct S
{
    int f(void *);
};

int S::f(void *arg)
{
    S *p = (S *)sub_87bf80(this);
    ((void (__thiscall *)(void *, void *))(*(unsigned long **)p)[0x1dc / 4])(p, arg);
    return (int)p;
}
