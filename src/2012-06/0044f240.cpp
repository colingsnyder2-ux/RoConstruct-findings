// from server: 60% by atomic.potato
struct S
{
    int __cdecl f(int, int);
};

extern "C" void __stdcall sub_44ea30(S*, int, int);

int S::f(int a, int b)
{
    sub_44ea30(this, a, b);
    return (int)this;
}
