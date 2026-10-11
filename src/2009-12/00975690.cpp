// from server: 76% by atomic.potato
extern "C" void __cdecl func_006d0e40(int, const void*, const void*, const void*, int);
extern "C" void __cdecl func_007f4929(const void*);

extern int g_00986050;
extern const char g_009d7fa0[];
extern const char g_009d7fa8[];

void func_00975690()
{
    func_006d0e40(0x270, 0, g_009d7fa0, g_009d7fa8, 1);
    func_007f4929(&g_00986050);
}
