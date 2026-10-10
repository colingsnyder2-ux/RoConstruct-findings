// from server: 97% by atomic.potato
typedef int (__cdecl *Fn1)(int);
typedef int (__thiscall *Fn2)(void *, int);

extern "C" int __cdecl sub_007f5286(int);
extern "C" int (__thiscall *imported_0098b768)(void *, int);

struct S
{
    int f();
    int pad0[3];
    void *p;
};

int S::f()
{
    int *a = *(int **)((char *)p + 0xa90);
    int v = *(int *)((char *)a + 0x1b4);
    if (v)
    {
        v = sub_007f5286(v);
        return imported_0098b768((void *)0xb3fb4c, v);
    }
    return 0;
}
