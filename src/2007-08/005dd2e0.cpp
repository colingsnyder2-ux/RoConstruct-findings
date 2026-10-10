// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* rep;
};

struct RefCountedBase {
    void* vptr;
    long refCount;
};

struct SharedPtr {
    void* px;
    void* pi;
};

struct Creator {
    void* vptr;
};

struct FactoryProduct {
    char pad[0xfc];
    void* field_fc;
    void* field_100;
    void* field_104;
    void setField(void*);
};

extern "C" void __cdecl sub_5e49e0(void*, void*);
extern "C" void __cdecl sub_402a60(void*, void*);
extern "C" void __cdecl sub_444710(void*, void*);
extern "C" void __cdecl sub_5da300(void*, void*, int);
extern "C" void __cdecl sub_5dbac0(void*, void*);
extern "C" void __cdecl sub_4ac3d0(void*, void*, void*, void*);
extern "C" void __cdecl sub_728640(void*, void*);
extern "C" void __cdecl sub_728460(void*, void*);
extern "C" void __cdecl sub_49a230(void*, void*);
extern "C" void __cdecl sub_728350(void*, void*);

void FactoryProduct::setField(void* p) {
    void* local8 = 0;
    void* local4 = 0;
    void* local24 = 0;
    void* local14 = 0;
    void* local28 = 0;
    void* local1c = 0;
    void* local18 = 0;

    if (p == this->field_fc) {
        return;
    }

    sub_5e49e0(&local8, p);
    this->field_fc = *(void**)&local8;
    sub_402a60(&this->field_100, (char*)&local8 + 4);

    if (local8 != 0) {
        RefCountedBase* obj = (RefCountedBase*)local8;
        if (_InterlockedExchangeAdd(&obj->refCount, -1) == 1) {
            void** vt = (void**)obj->vptr;
            ((void (__thiscall*)(void*))vt[1])(obj);
            if (_InterlockedExchangeAdd((volatile long*)((char*)obj + 8), -1) == 1) {
                void** vt2 = (void**)obj->vptr;
                ((void (__thiscall*)(void*))vt2[2])(obj);
            }
        }
    }

    sub_444710(this, (void*)0x8c6d48);
    sub_5da300(this, this->field_fc, 1);

    if (this->field_fc == 0) {
        sub_728350(&this->field_104, 0);
        return;
    }

    local8 = 0;
    local4 = (void*)0x5da510;
    local28 = this;

    sub_5dbac0(&local24, &local4);

    void* pfc = this->field_fc;
    if (pfc != 0) {
        pfc = (char*)pfc + 4;
    } else {
        pfc = 0;
    }

    sub_4ac3d0((void*)0x8c13cc, &local1c, pfc, &local24);
    sub_728640(&this->field_104, &local1c);
    sub_728460(&local14, 0);
    sub_49a230(&local24, 0);
}
