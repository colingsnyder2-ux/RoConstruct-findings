// from server: 85% by atomic.potato
struct S
{
    void __stdcall f();
};

extern "C" void __stdcall target(int, int);

void __stdcall S::f()
{
    target(0, 0);
}
