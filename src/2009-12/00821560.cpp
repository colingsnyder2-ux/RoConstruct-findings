// from server: 57% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl sub_9266ac();
extern "C" void __cdecl sub_81f480(S *);

void S::f()
{
    sub_9266ac();
    (*(void (__cdecl **)(void *))(*(int **)((char *)this + 0x100) + 0x58))((char *)this + 0x100);
    sub_81f480(this);
}
