// from server: 89% by atomic.potato
extern "C" int __cdecl sub_0080bbc2(int);

struct S
{
    unsigned char f();
};

unsigned char S::f()
{
    int value = *(int *)((char *)*(int *)((char *)this + 12) + 0xACC);
    value = *(int *)((char *)value + 0x188);
    if (value)
    {
        value = sub_0080bbc2(value);
        return ((unsigned char (__thiscall *)(int, int))0xA40A50)(0xC90844, value);
    }
    return 0;
}
