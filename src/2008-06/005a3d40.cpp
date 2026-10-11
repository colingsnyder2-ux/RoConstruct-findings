// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Inner {
    int f0;
    int f4;
    int f8;
};

struct Obj {
    void* vptr;
    int ref1;
    int ref2;
};

struct Holder {
    int a;
    int b;
    int c;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void __stdcall sub_581cc0(Holder* h, int a, int b);
void __stdcall sub_567770(void* p);
void* __stdcall sub_5a19f0(void* self, void* a, void* b);
void __stdcall sub_5a1fc0(void* self, void* p);

struct VWorkspace {
    void func(void* arg);
};

void VWorkspace::func(void* arg) {
    Holder h;
    h.a = 0;
    h.b = 0;
    h.c = 0;
    void* local = 0;
    void* saved = 0;
    if (arg) {
        sub_581cc0(&h, 1, (int)arg);
        sub_567770(&h);
        saved = (void*)h.b;
    }
    void* mem = operator_new(0x50);
    void* obj;
    if (mem) {
        obj = sub_5a19f0(mem, this, arg);
    } else {
        obj = 0;
    }
    sub_5a1fc0(this, obj);
    if (saved) {
        Obj* o = (Obj*)saved;
        if (_InterlockedExchangeAdd((volatile long*)((char*)o + 4), -1) == 1) {
            void** vt = *(void***)o;
            ((void (__thiscall*)(void*))vt[1])(o);
            if (_InterlockedExchangeAdd((volatile long*)((char*)o + 8), -1) == 1) {
                void** vt2 = *(void***)o;
                ((void (__thiscall*)(void*))vt2[2])(o);
            }
        }
    }
}
