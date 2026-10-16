// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

// Forward declarations of helper functions used by the target.
extern "C" void* __cdecl func_6a0920(unsigned int size);
extern "C" void __cdecl func_6a067a(void* p);
extern "C" void* __cdecl func_581cc0(void* self, int flag);
extern "C" void* __cdecl func_60ff80(void* a, void* b);
extern "C" void __cdecl func_6407a0(void* a, void* b, void* c, void* d, void* e, void* f, void* g);

// The object whose refcounted control block is manipulated.
struct Control {
    long unused;
    volatile long references;
};

// A shared_ptr-like object with an object pointer and a control block pointer.
struct Shared {
    void* object;
    Control* control;
};

// The class containing the target method.
struct AxisMoveTool {
    char pad0[0x18];
    void* field18;
    bool method(void* arg);
};

bool AxisMoveTool::method(void* arg)
{
    void* local18 = this->field18;
    void* local1c = 0;
    void* local20 = 0;

    void* p = func_6a0920(4);
    if (p != 0) {
        *(void**)p = &local1c;
    } else {
        p = 0;
    }

    void* local24 = p;
    void* local30 = 0;
    void* local34 = 0;
    void* local38 = 0;

    void* r1 = func_581cc0(&local1c, 1);
    void* esi = *(void**)((char*)r1 + 0x154);
    void* ebx = *(void**)((char*)esi + 0x10);
    if (*(unsigned int*)((char*)esi + 0xc) > (unsigned int)ebx) {
        // _invalid_parameter_noinfo
        void (*fn)() = *(void(**)())0x802890;
        fn();
    }
    void* edx = *(void**)esi;
    void* local14 = edx;

    void* r2 = func_581cc0(&local1c, 1);
    void* edi = *(void**)((char*)r2 + 0x154);
    void* esi2 = *(void**)((char*)edi + 0xc);
    if ((unsigned int)esi2 > *(unsigned int*)((char*)edi + 0x10)) {
        void (*fn)() = *(void(**)())0x802890;
        fn();
    }
    void* edi2 = *(void**)edi;

    func_6407a0(&local24, edi2, esi2, local14, ebx, (void*)0x6404c0, &local24);

    void* edx2 = *(void**)((char*)&local24 + 0x2c);
    void* eax2 = *(void**)((char*)&local24 + 0x28);
    int count = ((int)edx2 - (int)eax2) >> 2;

    if (count > 0) {
        void* r3 = func_60ff80(&local1c, &local30);
        float* src = (float*)r3;
        float* dst = (float*)arg;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];

        void* eax3 = *(void**)((char*)&local24 + 0x10);
        if (eax3 != 0) {
            func_6a067a(eax3);
        }

        void* edx3 = *(void**)&local24;
        func_6a067a(edx3);

        void* esi3 = *(void**)&local1c;
        if (esi3 != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi3 + 4), -1) == 1) {
                void** vt = *(void***)esi3;
                void (*fn)(void*) = (void(*)(void*))vt[1];
                fn(esi3);
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi3 + 8), -1) == 1) {
                void** vt = *(void***)esi3;
                void (*fn)(void*) = (void(*)(void*))vt[2];
                fn(esi3);
            }
        }
        return true;
    } else {
        if (eax2 != 0) {
            func_6a067a(eax2);
        }
        void* eax4 = *(void**)&local24;
        func_6a067a(eax4);

        void* esi4 = *(void**)&local1c;
        if (esi4 != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi4 + 4), -1) == 1) {
                void** vt = *(void***)esi4;
                void (*fn)(void*) = (void(*)(void*))vt[1];
                fn(esi4);
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi4 + 8), -1) == 1) {
                void** vt = *(void***)esi4;
                void (*fn)(void*) = (void(*)(void*))vt[2];
                fn(esi4);
            }
        }
        return false;
    }
}
