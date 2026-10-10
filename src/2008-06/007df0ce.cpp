// from server: 56% by atomic.potato
typedef unsigned int uint32_t;

extern "C" void __cdecl func_006a1dd2(uint32_t);

extern "C" void __cdecl func_006a14c0();

uint32_t func_007df0ce(uint32_t value)
{
    func_006a1dd2(*(uint32_t *)(value - 4) ^ value);
    return 0x901060;
}
