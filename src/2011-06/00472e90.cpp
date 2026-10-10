// from server: 97% by atomic.potato
struct S
{
    int __cdecl f(void*, unsigned int);
};

extern "C" int __cdecl sub_46FB00(void*, void*, unsigned int);

int S::f(void* a, unsigned int b)
{
    if (b != 4)
        return sub_46FB00(this, a, b);

    *(unsigned int*)a = 0x00C158E0;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
    return 0;
}
