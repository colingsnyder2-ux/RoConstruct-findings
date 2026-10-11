// from server: 25% by atomic.potato
extern "C" void __cdecl sub_42AFC0();

struct StandardOut
{
    void f();
};

void StandardOut::f()
{
    volatile int x = 0;
    sub_42AFC0();
}
