// from server: 92% by atomic.potato
extern "C" void func_005294f0(void*, const void*, const void*, int, int, int);
extern "C" void __cdecl func_007f4929(const void*);

struct seg_00960000
{
    void f();
};

void seg_00960000::f()
{
    func_005294f0((void*)0x00b800d4, (const void*)0x009bc594,
                  (const void*)0x009bc3b8, 0xc9, 0x0f, 0);
    func_007f4929((const void*)0x00980370);
}
