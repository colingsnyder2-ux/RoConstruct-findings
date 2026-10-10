// from server: 97% by atomic.potato
typedef int (__thiscall *Fn)(void *, void *);

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int (__thiscall *import_9EA8D8)(void *, int);

struct S
{
    int f();
};

int S::f()
{
    int *a = *(int **)((char *)this + 12);
    int *b = *(int **)((char *)a + 2720);
    int v = *(int *)((char *)b + 436);
    if (v)
    {
        v = sub_7A93C6(v);
        return import_9EA8D8((void *)0xBB6DAC, v);
    }
    return 0;
}
