// from server: 57% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" int sub_746f00(int);
extern "C" int sub_746dc0(int, int, int, int);

int S::f(int a, int b, int c)
{
    sub_746f00(0);
    sub_746dc0(0, a, b, c);
    return a;
}
