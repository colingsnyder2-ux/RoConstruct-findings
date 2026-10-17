// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct String {
    char pad[0x1c];
};

struct Creator {
    void* vptr;
    char pad[0x14];
};

struct ServiceProvider {
    char pad[0x344];
};

extern "C" {
    bool __cdecl func_0055bd60(void*, void*);
    void* __cdecl func_00491e50(void*);
    void __cdecl func_00576940(void*, char);
    void __cdecl func_0040db00(void*, void*);
    void* __cdecl func_006a0920(unsigned int);
    void __cdecl func_006430e0(void*, void*);
    void __cdecl func_005a1fc0(void*, void*);
    void* __cdecl func_005cf8d0(void*, void*);
    void __cdecl func_0049d200(void*, void*);
    void* __cdecl func_0080240c();
}

struct VStarterPackService {
    char pad0[0x180];
    String name;
    char pad1[0x1c];
    void* field;
    void method(void* arg);
};

void VStarterPackService::method(void* arg) {
    String* s = &this->name;
    if (func_0055bd60(s, arg)) {
        func_0080240c();
        *(void**)((char*)s + 0x1c) = *(void**)((char*)arg + 0x1c);
        void* sp = func_00491e50(this);
        if (sp) {
            char b = 0;
            func_00576940((char*)sp + 0x344, b);
        }
        func_0040db00(this, (void*)0x979cbc);
    }
}
