// from server: 71% by atomic.potato
struct TToolVerb
{
    int f();
    int *p;
};

typedef int (__cdecl *CompareTypeInfo)(const void *, const void *);
typedef int (__thiscall *InvokeTypeInfo)(void *, int);

extern "C" int __cdecl sub_7f5286(int);
extern "C" int __cdecl imported_98b768(void *, int);

int TToolVerb::f()
{
    int *a;
    int *b;
    int v;

    a = (int *)((char *)p + 0xc);
    b = (int *)((char *)*a + 0xa90);
    v = *(int *)((char *)*b + 0x1b4);
    if (v == 0)
        return 0;
    v = sub_7f5286(v);
    return imported_98b768((void *)0xb3f7e8, v);
}
