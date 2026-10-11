// from server: 61% by atomic.potato
extern "C" int __cdecl sub_81c2d0();
extern "C" void __cdecl sub_826e00(int, int, int, int);

struct CXTPReportControl
{
};

int __cdecl f(int a, int b, int c)
{
    int x = 0;
    x = sub_81c2d0();
    sub_826e00(b, c, x, a);
    return b;
}
