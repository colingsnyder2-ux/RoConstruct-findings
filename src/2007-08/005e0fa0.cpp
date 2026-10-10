// from server: 52% by colin
struct RBX_VMotorFeature_FactoryProduct {
    char pad0[8];
    char field8;
    char pad9[0x13];
    char field1C;
    char field1D[0x17];
    char field34;
    void func_005e0fa0();
};

extern "C" void __stdcall func_005ba960(void*);
extern "C" void __stdcall func_005ba4b0(void*);
extern "C" void __stdcall func_005bad30(void*, void*);
extern "C" void __stdcall func_005e0bf0(void*, void*, int, void*, int);
extern "C" void __stdcall func_00567990(void*, void*);
extern "C" void __stdcall func_005e0fa0_helper(void);
extern float flt_00797e9c;
extern void* ptr_0077e6d8;

void RBX_VMotorFeature_FactoryProduct::func_005e0fa0()
{
    char* p = (char*)this;
    char* esi = *(char**)(p + 0x1c);
    int ebx = *(int*)(esi + 0x234);
    esi += 0x22c;
    if (*(unsigned int*)(esi + 4) > (unsigned int)ebx) {
        ((void (__stdcall*)())ptr_0077e6d8)();
    }
    int ebp = *(int*)(esi + 4);
    if ((unsigned int)ebp > *(unsigned int*)(esi + 8)) {
        ((void (__stdcall*)())ptr_0077e6d8)();
    }
    char local[0x10];
    func_005e0bf0(esi, local, ebp, esi, ebx);
    char* esi2 = p + 8;
    func_005ba960(esi2);
    func_005ba4b0(esi2);
    if (*(char*)&local[0] != 0) {
        char local2[0x10];
        func_005bad30(local2, esi2);
        float* eax = (float*)local2;
        float f0 = eax[3] + eax[0];
        float f1 = eax[4] + eax[1];
        float f2 = eax[5] + eax[2];
        float scale = flt_00797e9c;
        f0 *= scale;
        f1 *= scale;
        f2 *= scale;
        float f3 = eax[4];
        func_00567990((void*)(p + 0x1c), local2);
    }
    p[0x18] = 1;
}
