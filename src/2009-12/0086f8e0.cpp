// from server: 76% by atomic.potato
typedef unsigned char BYTE;

extern "C" void ImportedCall(void *);
extern "C" void Subroutine(void *);
extern "C" void __stdcall Cleanup(void *);

struct S
{
    S *f(BYTE);
};

S *S::f(BYTE flag)
{
    ImportedCall((char *)this + 0x78);
    Subroutine(this);
    if (flag & 1)
        Cleanup(this);
    return this;
}
