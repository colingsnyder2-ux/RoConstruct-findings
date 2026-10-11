// from server: 73% by atomic.potato
extern "C" void func_005294f0(const char*, const char*, int, int, int);
extern "C" void __cdecl func_007f4929(const void*);

struct seg_00960000
{
    void f();
};

void seg_00960000::f()
{
    func_005294f0((const char*)0x9bc5d4, (const char*)0x9bc5b8, 0x98, 0x0f, 0);
    func_007f4929((const void*)0x9801b0);
}
