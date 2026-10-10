// from server: 66% by colin
struct CXTMaskEditT {
    int sub_6F7270(int, int);
    int sub_6F6F10(int);
};

extern "C" int __stdcall sub_738412();
extern "C" int (__stdcall *off_77DCD0)();
extern "C" int (__stdcall *off_77DCC8)();

int CXTMaskEditT::sub_6F7270(int a2, int a3) {
    if (*(int*)((char*)this + 0x5c) != 0)
        return 0;
    if (*(int*)((char*)this + 0x20) == 0)
        return 0;
    if (sub_738412() & 0x800)
        return 0;
    if (off_77DCD0() == 0)
        return 0;

    int (__thiscall *fn1)(CXTMaskEditT*, int) = *(int (__thiscall **)(CXTMaskEditT*, int))(*(int*)this + 0x148);
    if (fn1(this, *(unsigned char*)a2) == 0)
        return 1;

    if (a3 >= off_77DCC8())
        return 0;
    if (sub_6F6F10(a3) == 0)
        return 0;

    int (__thiscall *fn2)(CXTMaskEditT*, int, int) = *(int (__thiscall **)(CXTMaskEditT*, int, int))(*(int*)this + 0x144);
    fn2(this, a2, a3);
    return 0;
}
