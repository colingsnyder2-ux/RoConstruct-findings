// from server: 45% by atomic.potato
extern "C" void __cdecl sub_009092D5(int);
extern "C" void (__cdecl *const sub_00C9B5D0)();

struct S_func_00907266
{
    void f();
};

void S_func_00907266::f()
{
    sub_009092D5(1);
    sub_00C9B5D0();
}
