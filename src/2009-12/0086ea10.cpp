// from server: 77% by atomic.potato
extern "C" unsigned int __cdecl f0086e0c0();
extern "C" unsigned short __cdecl f0086e900(unsigned int);
extern "C" void f0086e730(void *, unsigned short);

struct S
{
    void f();
};

void S::f()
{
    unsigned int a = f0086e0c0();
    unsigned short b = f0086e900(a);
    f0086e730(this, b);
}
