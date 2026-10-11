// from server: 47% by colin




extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);
extern "C" int __cdecl sub_6A158C(int, int);
extern "C" void __stdcall sub_802864(int);
extern "C" void __stdcall sub_802864_bad_cast(int);

struct LuaArguments {
    int field0;
    int field4;
    void convertToReturnValues(int);
};

void LuaArguments::convertToReturnValues(int arg) {
    int result = sub_6A17C6(field0, 0, 0x9295B4, 0x95AF78, 0);
    if (result == 0) {
        int local;
        sub_802864((int)&local);
        sub_6A158C((int)&local, 0x8D362C);
    }
    int* obj = (int*)(result + 0x18);
    int* vtbl = (int*)*obj;
    int (*fn)(int*, int, int) = (int (*)(int*, int, int))vtbl[3];
    fn(obj, field4, arg);
}
