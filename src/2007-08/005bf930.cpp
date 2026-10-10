// from server: 74% by colin
extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" void* __stdcall func_0077e710(int);

struct LuaArguments {
    int field0;
    int field4;
    void func_005bf930(int);
};

void LuaArguments::func_005bf930(int arg)
{
    int local[3];
    int result = func_00630d36(field0, 0, 0x887174, 0x887c18, 0);
    if (result == 0) {
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, (int)local);
    }
    int* p = (int*)result;
    int* obj = (int*)p[6];
    int* vtbl = (int*)obj[0];
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))vtbl[2];
    fn(obj, field4, arg);
}
