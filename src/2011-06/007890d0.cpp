// from server: 97% by atomic.potato
struct S
{
    int f();
};

typedef int (__cdecl *Fn)(int);
typedef int (__thiscall *TypeInfoEqual)(void *, const void *);

extern "C" int __cdecl sub_0080bbc2(int);
extern "C" TypeInfoEqual g_import_00a40a50;

int g_00c911b4;

int S::f()
{
    int value = *(int *)((char *)this + 12);
    value = *(int *)((char *)value + 0xacc);
    value = *(int *)((char *)value + 0x188);
    if (value)
    {
        value = sub_0080bbc2(value);
        return g_import_00a40a50((void *)0xc911b4, (const void *)value);
    }
    return 0;
}
