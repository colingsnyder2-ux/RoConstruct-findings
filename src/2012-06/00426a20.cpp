// from server: 56% by atomic.potato
struct S
{
    int f(int a, int b);
};

extern "C" int __stdcall sub_9828d0(S* p, int a, int b);

int S::f(int a, int b)
{
    return sub_9828d0((S*)((char*)this - 240), a, b);
}
