// from server: 97% by atomic.potato
extern "C" int __cdecl sub_7f5286(int);
extern "C" int (__thiscall *sub_98b768)(int, int);

struct S
{
    int pad0[3];
    int p;
    int f();
};

int S::f()
{
    int a = *(int *)((char *)p + 0xa90);
    int b = *(int *)((char *)a + 0x1b4);
    if (b)
        return sub_98b768(0xb3f518, sub_7f5286(b));
    return 0;
}
