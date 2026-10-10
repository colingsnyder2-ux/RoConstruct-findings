// from server: 97% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7f5286(int);
extern "C" int (__thiscall *sub_98b768)(void *, int);

int S::f()
{
    int *a = *(int **)((char *)this + 0x0c);
    int *b = *(int **)((char *)a + 0x0a90);
    int v = *(int *)((char *)b + 0x1b4);

    if (v)
    {
        v = sub_7f5286(v);
        return sub_98b768((void *)0x00b3fd68, v);
    }

    return 0;
}
