// from server: 58% by atomic.potato
struct S
{
};

void __cdecl f(void* p, int a, int b)
{
    if (b != 4)
        f(p, a, b);
    *(unsigned long*)a = 0x00cb0990;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
