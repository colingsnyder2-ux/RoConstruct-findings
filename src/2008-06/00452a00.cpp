// from server: 27% by atomic.potato
// roc 2008-06 00452a00  unit: RBX::VVisit::?$FactoryProduct::Creator  size: 320 bytes

extern "C" void __stdcall func_00557330(int, int);
extern "C" void* __stdcall make_value_0044f360();
extern "C" void __stdcall func_004124c0(int, int);
extern "C" void __stdcall func_004137a0();
extern "C" void __stdcall func_00572a90(int, int);
extern "C" void __stdcall func_00600660(int);
extern "C" void __stdcall func_004025b0(int, int);

struct S {
    char pad[0x190];
    char pad2[0xc];
    int* begin;
    int* end;
    int* cap;
    int field_19c;
    int field_1a0;
    void* method();
};

void* S::method() {
    func_00557330(0x96dd6c, 0x450850);
    int edi = (int)make_value_0044f360();
    int ecx = field_1a0 - field_19c;
    ecx >>= 3;
    int eax = edi + 1;
    if ((unsigned)eax > (unsigned)ecx) {
        int tmp[2];
        tmp[0] = 0;
        tmp[1] = 0;
        func_004124c0(eax, (int)tmp);
    } else {
        int edx = (int)(end - begin);
        edx >>= 3;
        if (edi >= edx) {
            void (*fn)() = *(void(**)())0x802890;
            fn();
        }
        int* p = begin + edi * 2;
        if (*p != 0) {
            return (void*)*p;
        }
    }
    func_00557330(0x96cc2c, 0x413a50);
    func_004137a0();
    int tmp2;
    func_00572a90((int)&tmp2, (int)this);
    int ecx2 = tmp2;
    if (ecx2 == 0) {
        func_00600660((int)&tmp2);
        return 0;
    }
    int edx2 = (int)(end - begin);
    edx2 >>= 3;
    if (edi >= edx2) {
        void (*fn)() = *(void(**)())0x802890;
        fn();
        ecx2 = tmp2;
    }
    int* slot = begin + edi * 2;
    *slot = ecx2;
    func_004025b0((int)(slot + 1), (int)&tmp2);
    func_00600660((int)&tmp2);
    return (void*)ecx2;
}
