// from server: 77% by atomic.potato
extern "C" int __cdecl sub_007f5286(int);

typedef int (__cdecl *TypeInfoCompare)(void *, void *);

struct TToolVerb
{
    int pad0[3];
    void *field0c;
    int f();
};

int TToolVerb::f()
{
    void *a = *(void **)((char *)field0c + 0xA90);
    int v = *(int *)((char *)a + 0x1B4);
    if (v)
    {
        int x = sub_007f5286(v);
        TypeInfoCompare compare = *(TypeInfoCompare *)0x0098B768;
        return compare((void *)0x00B3FE14, (void *)x);
    }
    return 0;
}
