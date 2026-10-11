// from server: 51% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" int __cdecl fn4664d0(int);
extern "C" void fn662e00(int, int, int, int);

int S::f(int a, int b, int c)
{
    int d = fn4664d0(0);
    fn662e00(d, c, b, a);
    return a;
}
