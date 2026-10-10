// from server: 67% by colin
struct BoundFuncDesc {
    void construct(int a, int b);
};

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" void __stdcall func_0077e710(int);
extern "C" void __cdecl func_00630d36_helper();

void BoundFuncDesc::construct(int a, int b)
{
    int result = func_00630d36(a, 0, 0x88209c, 0x8a2eb0, 0);
    if (result == 0) {
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, 0);
    }
    int (*fn)(void) = *(int (**)(void))(*(int*)((char*)this + 0x28));
    int offset = *(int*)((char*)this + 0x2c);
    fn();
}
