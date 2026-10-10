// from server: 63% by atomic.potato
extern "C" void __cdecl sub_5cc7a0(void*, void*, unsigned int);

struct PartChunk
{
    void f(void*, unsigned int, unsigned int);
};

void PartChunk::f(void* a, unsigned int b, unsigned int c)
{
    if (c != 4)
    {
        sub_5cc7a0(this, a, c);
        return;
    }

    *(unsigned long*)b = 0x00b25ba8;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
