// from server: 85% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_006a1de2(int);
extern "C" int type_info_equal(int, int);

int S::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 516);
    int c = *(int *)((char *)b + 944);
    if (c)
    {
        int d = sub_006a1de2(c);
        return type_info_equal(0x94fe5c, d);
    }
    return 0;
}
