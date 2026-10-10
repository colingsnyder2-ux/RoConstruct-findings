// from server: 90% by atomic.potato
extern "C" int __stdcall sub_005249d0(int, int, int, int);

struct S
{
    int f(int, int);
};

int S::f(int a, int b)
{
    return sub_005249d0(a, b, 0, 0);
}
