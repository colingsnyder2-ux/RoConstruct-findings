// from server: 80% by atomic.potato
extern "C" void __cdecl sub_601950(int);

struct S
{
};

void __cdecl f(int code, int *value)
{
    if (code != 4)
    {
        sub_601950(code);
        return;
    }

    *value = 0xbae898;
    *((char *)value + 4) = 0;
    *((char *)value + 5) = 0;
}
