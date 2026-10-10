// from server: 97% by atomic.potato
struct S
{
    int f(int);
};

extern "C" void __cdecl sub_721e80(void *, void *, int);

int S::f(int a)
{
    sub_721e80((char *)this + 0xa8, (char *)this + 0xb0, a);
    return a;
}
