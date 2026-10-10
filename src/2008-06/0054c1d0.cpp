// from server: 36% by atomic.potato
struct S
{
    int f(int);
    int member10;
};

extern "C" int __stdcall sub_005444a0(int, int);

int S::f(int value)
{
    sub_005444a0(value, member10);
    return value;
}
