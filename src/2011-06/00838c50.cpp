// from server: 92% by atomic.potato
typedef unsigned char BYTE;

extern "C" void __stdcall Imported(void *);
extern "C" void __fastcall Call8B2DF0(void *);
extern "C" void __stdcall Call8378A0(void *);

struct S
{
    void *field74;
    void *f(unsigned int);
};

void *S::f(unsigned int flag)
{
    Imported((char *)this + 0x74);
    Call8B2DF0(this);
    if (flag & 1)
        Call8378A0(this);
    return this;
}
