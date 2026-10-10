// from server: 82% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7a93c6(int);
extern "C" int type_info_equal(int, int);

int S::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)*(int *)((char *)a + 0xaa0) + 0x1b4);
    if (!b)
        return 0;
    b = sub_7a93c6(b);
    return type_info_equal(0xbb75dc, b);
}
