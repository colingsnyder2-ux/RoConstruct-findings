// from server: 64% by atomic.potato
extern "C" int __stdcall imported(int, int, int, int);

struct S
{
    int f(int, int, int, int);
};

int S::f(int a, int b, int c, int d)
{
    imported(d, b, c, a);
    return 0;
}
