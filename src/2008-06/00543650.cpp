// from server: 37% by atomic.potato
struct S
{
    void f();
};

extern "C" void __stdcall sub_550de0(void *);

void S::f()
{
    sub_550de0((char *)this + 0x14);
}
