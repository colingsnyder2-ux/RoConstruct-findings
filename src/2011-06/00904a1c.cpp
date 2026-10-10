// from server: 47% by atomic.potato
extern "C" void __cdecl sub_009092d5(int);

struct S_func_00904a1c {
    void f();
};

extern "C" void __cdecl target_00c9b5d8();

void S_func_00904a1c::f()
{
    sub_009092d5(1);
    target_00c9b5d8();
}
