// from server: 94% by atomic.potato
extern "C" void __stdcall sub_7f4878(int, int);

struct S
{
    void f();
};

void S::f()
{
    sub_7f4878(0, 0);
}
