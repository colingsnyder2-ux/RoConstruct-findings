// from server: 66% by atomic.potato
extern "C" int __cdecl sub_814A60();
extern "C" void __cdecl sub_8929D0();

struct S
{
    void f();
};

void S::f()
{
    int value = sub_814A60();
    if (value)
        ((void (__thiscall *)(void *, unsigned int))sub_8929D0)((void *)value, 0x81);
}
