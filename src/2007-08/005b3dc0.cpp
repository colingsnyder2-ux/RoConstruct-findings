// from server: 86% by colin
struct Assembly {
    char pad0[8];
    int field8;
    char padC[0x20 - 0xC];
    int field20;
    int field24;
    char pad28[0x64 - 0x28];
    int field64;

    void func_005b3dc0(int arg);
};

extern "C" void __stdcall sub_005e24b0(int);
extern "C" void __stdcall sub_00605b30(void*, int*);

void Assembly::func_005b3dc0(int arg)
{
    int zero = 0;
    if (arg == field8) {
        field8 = zero;
    }
    *(int*)(arg + 0x20) = zero;
    int* p = *(int**)(arg + 0x24);
    sub_005e24b0(*(int*)((char*)p + 0x64));
    int local;
    sub_00605b30((char*)this + 0xC, &local);
}
