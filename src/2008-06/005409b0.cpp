// from server: 36% by atomic.potato
struct S
{
    int f(int);
    int m18;
};

extern "C" int __stdcall sub_0054e320(int, int);

int S::f(int value)
{
    sub_0054e320(value, m18);
    return value;
}
