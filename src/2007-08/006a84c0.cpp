// from server: 64% by tester
struct CXTPRibbonBarCControlCaptionButton {
    void func_006a84c0(int);
};

extern "C" void __fastcall G1_func_006a79e0(void*);

void CXTPRibbonBarCControlCaptionButton::func_006a84c0(int arg) {
    int flag;
    if (*(int*)((char*)this + 0x9c) != 0) {
        int* p = *(int**)((char*)this + 0x168);
        if (p[6] != 0) {
            flag = 1;
        } else {
            flag = 0;
        }
    } else {
        flag = 0;
    }

    void* ecx_val = *(void**)((char*)this + 0xfc);
    G1_func_006a79e0(ecx_val);
    void* ebx = ecx_val;

    int v14 = *(int*)((char*)this + 0xc0);
    int v18 = *(int*)((char*)this + 0xc4);
    int ebp = *(int*)((char*)this + 0x84);
    int v1c = *(int*)((char*)this + 0xc8);
    int v20 = *(int*)((char*)this + 0xcc);

    int* edi = *(int**)ebx;
    edi = (int*)((char*)edi + 0x128);

    int (__thiscall *f78)(void*, int) = *(int (__thiscall**)(void*, int))((*(int*)this) + 0x78);
    int r78 = f78(this, flag);

    int (__thiscall *f6c)(void*) = *(int (__thiscall**)(void*))((*(int*)this) + 0x6c);
    int r6c = f6c(this);

    int (__thiscall *fedi)(void*, int, int, int, int, int, int) = *(int (__thiscall**)(void*, int, int, int, int, int, int))edi;
    fedi(ebx, v14, v18, v1c, v20, ebp, r6c);
}
