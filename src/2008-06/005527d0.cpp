// from server: 40% by atomic.potato
struct S
{
    void f();
};

extern "C" void __stdcall resize(S*, int);

void S::f()
{
    resize(this, 0);
}
