// from server: 94% by atomic.potato
typedef int (__cdecl *Fn)(int);
typedef int (__thiscall *ImportFn)(int, int);

extern "C" int __cdecl sub_7f5286(int);
extern "C" ImportFn g_import;
extern "C" const void *import_addr_0xb38e0c;

struct S
{
    int pad0[3];
    void *p;

    char f();
};

char S::f()
{
    void *a = p;
    void *b = *(void **)((char *)a + 0xa90);
    int value = *(int *)((char *)b + 0x1b4);
    if (value)
    {
        int converted = sub_7f5286(value);
        g_import((int)import_addr_0xb38e0c, converted);
    }
    return 0;
}