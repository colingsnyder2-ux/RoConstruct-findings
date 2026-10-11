// from server: 78% by atomic.potato
extern "C" void sub_739000(void*, void*, void*, int, int);
extern "C" void __cdecl sub_7f4929(void*);

struct S
{
    void f();
};

void S::f()
{
    sub_739000((void*)0xb96598, (void*)0x9e1d1c, (void*)0x9e1c14, 0x158, 0xf);
    sub_7f4929((void*)0x988850);
}
