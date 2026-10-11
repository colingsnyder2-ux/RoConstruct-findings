// from server: 54% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" int sub_431c70(int);
extern "C" int sub_431b30(int, int, int, int);

int S::f(int a, int b, int c)
{
    sub_431c70(0);
    sub_431b30(sub_431c70(0), a, b, c);
    return a;
}
