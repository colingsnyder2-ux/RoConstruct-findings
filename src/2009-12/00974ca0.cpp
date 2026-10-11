// from server: 92% by atomic.potato
extern "C" void sub_006c8030(void*, void*, void*, unsigned int, unsigned int, void*);
extern "C" void __cdecl sub_007f4929(void*);

struct S
{
    void f();
};

void S::f()
{
    sub_006c8030((void*)0x00b925e8, (void*)0x009d76d4, (void*)0x009bb084, 0xc4, 0x0f, 0);
    sub_007f4929((void*)0x00985c70);
}
