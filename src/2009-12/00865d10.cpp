// from server: 76% by atomic.potato
extern "C" void sub_0098DEC0(void *);
extern "C" void sub_007F43E2(void *);
extern "C" void __stdcall sub_007F385A(void *);

struct S_00865D10
{
    char pad0[32];
    int f(unsigned char flags);
};

int S_00865D10::f(unsigned char flags)
{
    sub_0098DEC0((char *)this + 32);
    sub_007F43E2(this);
    if (flags & 1)
        sub_007F385A(this);
    return (int)this;
}
