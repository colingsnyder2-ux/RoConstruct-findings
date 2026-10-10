// from server: 47% by atomic.potato
extern "C" void __cdecl sub_008af41a(int);
extern "C" void __cdecl sub_00bec0ac();

struct S
{
    void f();
};

void S::f()
{
    sub_008af41a(1);
    sub_00bec0ac();
}
