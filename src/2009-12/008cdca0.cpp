// from server: 74% by atomic.potato
extern "C" void sub_007f3e30(void *);
extern "C" void __cdecl sub_0084d7a0(int);

struct S
{
    virtual void f168();
    virtual void f68();
    int f();
};

int S::f()
{
    sub_007f3e30(this);
    sub_0084d7a0(0);
    f168();
    f68();
    return 0;
}
