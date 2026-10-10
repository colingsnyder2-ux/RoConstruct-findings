// from server: 82% by atomic.potato
typedef unsigned int uint32_t;

extern "C" void __cdecl sub_45bc60(uint32_t);

struct CNameItem
{
    void __cdecl f(uint32_t, uint32_t);
};

void CNameItem::f(uint32_t a, uint32_t value)
{
    if (value != 4)
    {
        sub_45bc60(value);
        return;
    }

    *(uint32_t*)a = 0x00b09da8;
    *(unsigned char*)(a + 4) = 0;
    *(unsigned char*)(a + 5) = 0;
}
