// from server: 14% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl func_0047d410();
extern "C" void __cdecl func_004ac0d0();
extern "C" void __cdecl func_004acb50();
extern "C" void __cdecl func_004ad860();
extern "C" void __cdecl func_004adfd0();
extern "C" void __cdecl func_004ae570();
extern "C" void __cdecl func_004afc70();
extern "C" void __cdecl func_004b52b0();
extern "C" void __cdecl func_005c3f80();
extern "C" void __cdecl func_005c42d0();
extern "C" void* __cdecl func_006a0920(unsigned int);

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Replicator {
    void* vptr;
    char pad[0x2c38 - 4];
    char field_2c38[0x2c50 - 0x2c38];
    char field_2c50[0x2c74 - 0x2c50];
    char field_2c74[0x2c88 - 0x2c74];
    char field_2c88[0x2d1c - 0x2c88];
    void* field_2d1c;
    void* field_2d20;

    void NewInstanceItem(int a, int b);
};

void Replicator::NewInstanceItem(int a, int b)
{
    char buf1[0x18];
    char buf2[0x18];
    void* local10;
    void* local14;
    void* local18;
    void* local1c;

    func_005c3f80();
    func_005c3f80();

    void* v = field_2d1c;
    (void)v;

    bool result = false;
    (void)result;

    func_005c42d0();
    func_005c42d0();

    RefCounted* rc = (RefCounted*)0;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refcount, -1);
    }

    func_004adfd0();
    func_004b52b0();

    void* mem = func_006a0920(0x10);
    void* obj = 0;
    if (mem) {
        func_004afc70();
        obj = mem;
    }

    local10 = obj;
    func_004ac0d0();
    func_0047d410();

    func_004ad860();
    func_004acb50();

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            ((void(__thiscall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                ((void(__thiscall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }

    func_004ae570();

    func_005c42d0();
    func_005c42d0();

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            ((void(__thiscall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                ((void(__thiscall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }
}
