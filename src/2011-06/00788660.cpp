// from server: 80% by atomic.potato
struct TToolVerb
{
    int f();
};

extern "C" int __cdecl sub_0080BBC2(int);
extern "C" int __cdecl imported_00A40A50(int, int);

int g_00C90CE8;

int TToolVerb::f()
{
    int a;
    int b;

    a = *(int *)((char *)this + 12);
    b = *(int *)(a + 2764);
    a = *(int *)(b + 392);
    if (!a)
        return 0;
    a = sub_0080BBC2(a);
    return imported_00A40A50(g_00C90CE8, a);
}
