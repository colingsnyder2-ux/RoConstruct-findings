// from server: 19% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    volatile long ref1;
    volatile long ref2;
};

struct VHumanoidState {
    char pad0[0xc4];
    void* ptr_c4;
    void* ptr_c8;
    void* ptr_cc;
    void* ptr_d0;
    void* ptr_d4;
    void* ptr_d8;
    char byte_dc;
    char byte_e0;
    char pad_e1[3];
    char data_e4[0x24];
    float f108;
    float f10c;
    float f110;
};

extern "C" void __cdecl func_00643e00(void*);
extern "C" void __cdecl func_005e50f0(void*);
extern "C" void __cdecl func_004782d0(void*);
extern "C" void* __cdecl func_005d76d0(void*);
extern "C" void __cdecl func_00618a40(void*, void*);
extern "C" void __cdecl func_004025b0(void*, void*);
extern "C" void __cdecl func_00598cb0(void*);
extern "C" void __cdecl func_005e8140(void*, int);
extern "C" void __cdecl func_0066ef70(void*, void*);
extern "C" void __cdecl func_004a3340(void*, void*, void*, int);
extern "C" void __cdecl func_00595540(void*, void*);
extern "C" void __cdecl func_00595370(void*);
extern "C" void __cdecl func_0049f710(void*);
extern "C" void* __cdecl func_0066f020(void*);
extern "C" void __cdecl func_005e8f70(void*, void*);
extern "C" void* __cdecl func_005e93b0(void*, void*);
extern "C" void __cdecl func_0064d1e0(void*);
extern "C" void* __cdecl func_0056b620(void*, void*);
extern "C" void __cdecl func_004937f0(void*, void*);

void VHumanoidState_ctor(VHumanoidState* self, void* arg) {
    func_00643e00(arg);
    *(void**)self = (void*)0x84d128;
    *(void**)((char*)self + 4) = (void*)0x84d120;
    char* esi = (char*)self + 0xa0;
    func_005e50f0(esi);
    *(void**)self = (void*)0x84d168;
    *(void**)((char*)self + 4) = (void*)0x84d160;
    *(void**)esi = (void*)0x84d150;
    *(void**)((char*)self + 0xc4) = 0;
    *(void**)((char*)self + 0xc8) = 0;
    *(void**)((char*)self + 0xcc) = 0;
    *(void**)((char*)self + 0xd4) = 0;
    *(void**)((char*)self + 0xd8) = 0;
    *(char*)((char*)self + 0xdc) = 0;
    *(char*)((char*)self + 0xe0) = 0;
    char* ebx = (char*)self + 0xe4;
    func_004782d0(ebx);
    void* eax = func_005d76d0(arg);
    void* tmp;
    func_00618a40(&tmp, eax);
    void* v = *(void**)tmp;
    tmp = (char*)tmp + 4;
    *(void**)((char*)self + 0xc4) = v;
    func_004025b0((char*)self + 0xc8, &tmp);
    void* p = tmp;
    if (p != 0) {
        RefCounted* r = (RefCounted*)p;
        if (_InterlockedExchangeAdd(&r->ref1, -1) == 1) {
            r->slot1();
            if (_InterlockedExchangeAdd(&r->ref2, -1) == 1) {
                r->slot2();
            }
        }
    }
    if (*(void**)((char*)self + 0xc4) != 0) {
        func_00598cb0(*(void**)((char*)self + 0xc4));
        for (int i = 0; i < 9; i++) {
            ((int*)ebx)[i] = ((int*)eax)[i];
        }
        *(float*)(ebx + 0x24) = *(float*)((char*)eax + 0x24);
        *(float*)(ebx + 0x28) = *(float*)((char*)eax + 0x28);
        *(float*)(ebx + 0x2c) = *(float*)((char*)eax + 0x2c);
        void* q = *(void**)((char*)self + 0xc4);
        func_005e8140((char*)q + 0x228, 1);
        struct Local {
            void* f0;
            void* f4;
            void* f8;
        } local;
        local.f0 = (void*)0x66edc0;
        local.f4 = 0;
        local.f8 = self;
        func_0066ef70(&local, &local);
        void* r = *(void**)((char*)self + 0xc4);
        void* base = r ? (char*)r + 0x14 : 0;
        void* out;
        func_004a3340(&out, base, &local, 10);
        func_00595540((char*)self + 0xd0, &out);
        func_00595370(&local);
        func_0049f710(&local);
        void* s = func_0066f020(arg);
        *(void**)((char*)self + 0xcc) = s;
        func_005e8f70(s, *(void**)((char*)self + 0xc4));
        void* t = *(void**)((char*)arg + 0x21c);
        void* u = func_005e93b0(t, (char*)self + 0xa0);
        func_0064d1e0(u);
    }
    void* base2 = arg ? (char*)arg + 0x14 : 0;
    void* w = func_0056b620((void*)0x97a504, base2);
    if (w != 0) {
        float zero = 0.0f;
        func_004937f0((char*)w + 0x10, &zero);
    }
}
