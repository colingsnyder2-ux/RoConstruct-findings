// from server: 73% by atomic.potato
extern "C" void sub_007388b0(
    void *, void *, void *, int, int);

extern "C" void __cdecl sub_007f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    sub_007388b0(
        (void *)0x009e1cc4,
        (void *)0x009e1c14,
        (void *)0x00000160,
        0x0f,
        0);
    sub_007f4929((void *)0x009886b0);
}
