// from server: 80% by atomic.potato
extern "C" void __cdecl G1_func_006fe140(int);

struct S
{
};

void __cdecl f(int value, void *out)
{
    if (value != 4)
    {
        G1_func_006fe140(value);
        return;
    }

    *(unsigned long *)out = 0x00bdfd30;
    *((unsigned char *)out + 4) = 0;
    *((unsigned char *)out + 5) = 0;
}
