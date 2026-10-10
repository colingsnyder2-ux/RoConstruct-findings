// from server: 68% by colin
struct LuaArguments {
    int field0;
    int field4;
    void func_005bfd40(int);
};

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" int __stdcall func_0077e710(int);

void LuaArguments::func_005bfd40(int arg)
{
    int result = func_00630d36(field0, 0, 0x887174, 0x8abd00, 0);
    if (result == 0) {
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, (int)&result);
    }
    int* p = (int*)(result + 0x18);
    int* vt = (int*)*p;
    int (*fn)(int*, int, int) = (int (*)(int*, int, int))vt[2];
    fn((int*)p, field4, arg);
}
