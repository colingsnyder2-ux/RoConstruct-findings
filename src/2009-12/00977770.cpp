// from server: 92% by atomic.potato
extern "C" void sub_006f7e80(void*, void*, void*, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl sub_007f4929(void*);

struct S
{
    void f();
};

void S::f()
{
    sub_006f7e80((void*)0xb94750, (void*)0x9dcca0, (void*)0x9d1b80, 0x224, 2, 0);
    sub_007f4929((void*)0x987220);
}
