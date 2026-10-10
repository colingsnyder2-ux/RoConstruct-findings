// from server: 46% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl sub_65fcf0(void *);

void S::f()
{
    sub_65fcf0((char *)this + 4);
}
