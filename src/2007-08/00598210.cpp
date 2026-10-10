// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" unsigned int __stdcall rand();
extern "C" void __stdcall _invalid_parameter_noinfo();

struct RBXName {
    void* p;
};

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct WeakPtr {
    RefCounted* px;
    RefCounted* pn;
};

struct Vector3 {
    float x, y, z;
};

struct Instance {
    void* vptr;
    char pad[0xec - 4];
    void* getSomething();
};

struct ControllerService {
    char pad0[0x18];
    void* field18;
    char pad1[0x20 - 0x1c];
    float field20;
    char pad2[0x5c - 0x24];
    void* field5c;
    char pad3[0xc0 - 0x60];
    void* fieldc0;

    void func_597ee0(void*);
    void func_597f80();
    void func_5fc7f0(void*);

    void someFunc(int a, int b);
};

struct ControllerService_ {
    void* vptr;
    char pad[0xec - 4];
    void* fieldec;
};

extern float g_7b1228;
extern float g_7b122c;
extern float g_793760;

extern "C" void __stdcall func_487c10();
extern "C" void __stdcall func_492360();
extern "C" void __stdcall func_52ff30();
extern "C" void __stdcall func_575460();
extern "C" void __stdcall func_5e49e0();
extern "C" void __stdcall func_630d36();

void ControllerService::func_597ee0(void*) {}
void ControllerService::func_597f80() {}
void ControllerService::func_5fc7f0(void*) {}

void ControllerService::someFunc(int a, int b) {
    if (field20 > *(float*)&a) {
        unsigned int r = rand();
        field20 = (float)r * g_7b122c + *(float*)&a + g_793760;
        WeakPtr wp;
        func_5fc7f0(&wp);
        if (wp.px != 0) {
            void* obj = wp.px;
            void* vtable = *(void**)obj;
            void* fn = *(void**)((char*)vtable + 4);
            ((void(__thiscall*)(void*))fn)(obj);
            if (_InterlockedExchangeAdd(&wp.px->ref1, -1) != 1) {
                void* vt = *(void**)wp.px;
                void* f = *(void**)((char*)vt + 4);
                ((void(__thiscall*)(void*))f)(wp.px);
            }
            if (_InterlockedExchangeAdd(&wp.px->ref2, -1) == 1) {
                void* vt = *(void**)wp.px;
                void* f = *(void**)((char*)vt + 8);
                ((void(__thiscall*)(void*))f)(wp.px);
            }
        } else if (wp.pn != 0) {
            if (_InterlockedExchangeAdd(&wp.pn->ref1, -1) == 1) {
                void* vt = *(void**)wp.pn;
                void* f = *(void**)((char*)vt + 4);
                ((void(__thiscall*)(void*))f)(wp.pn);
            }
            if (_InterlockedExchangeAdd(&wp.pn->ref2, -1) == 1) {
                void* vt = *(void**)wp.pn;
                void* f = *(void**)((char*)vt + 8);
                ((void(__thiscall*)(void*))f)(wp.pn);
            }
        }
    }
}
