// from server: 63% by atomic.potato
extern "C" void __cdecl sub_5cc6c0(int, int, int);

struct PartChunk
{
    void __cdecl f(int, int, int);
};

void __cdecl PartChunk::f(int a, int b, int c)
{
    if (c != 4)
        sub_5cc6c0(a, b, c);
    else
    {
        *(int *)b = 0x00b25a98;
        *((char *)b + 4) = 0;
        *((char *)b + 5) = 0;
    }
}
