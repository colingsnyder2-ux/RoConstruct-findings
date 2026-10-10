// from server: 85% by atomic.potato
extern "C" int __cdecl sub_7f5286(int);
extern "C" int __cdecl sub_98b768(int, int);

struct S
{
    int f();
    int pad0[3];
    int object;
};

int S::f()
{
    int a = *(int *)(object + 0xa90);
    int b = *(int *)(a + 0x1b4);
    if (b)
    {
        b = sub_7f5286(b);
        return sub_98b768(0xb3f674, b);
    }
    return 0;
}
