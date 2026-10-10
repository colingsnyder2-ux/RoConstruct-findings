// from server: 77% by atomic.potato
struct S
{
    void f();
};

extern "C" void __stdcall Target(void *, void *);

void S::f()
{
    Target((char *)this + 0x15c, (char *)this + 4);
}
