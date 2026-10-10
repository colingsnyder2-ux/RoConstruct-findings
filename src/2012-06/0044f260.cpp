// from server: 60% by atomic.potato
struct S
{
    int __cdecl f(int, int);
};

extern "C" void __cdecl sub_44ec40(S *, int, int);

int S::f(int a, int b)
{
    sub_44ec40(this, 0, b);
    return (int)this;
}
