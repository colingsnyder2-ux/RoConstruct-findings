// from server: 95% by atomic.potato
extern "C" unsigned long __declspec(dllimport) __cdecl TlsAlloc();

struct S
{
    void __cdecl f(unsigned char value);
};

unsigned char g1;
unsigned long g2;

void __cdecl S::f(unsigned char value)
{
    g1 = value;
    g2 = TlsAlloc();
}
