// from server: 56% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vftable;
    long refCount;
};

struct RefCounted2 {
    void* vftable;
    long refCount;
    long refCount2;
};

struct FuncDesc {
    void* vftable;
    void* function;
    void* signature;
};

struct BoundFuncDesc {
    void* vftable;
    void* function;
    void* signature;
};

struct ArgHelper {
    bool getBool(int index, bool& arg);
};

extern "C" bool __cdecl sub_4879D0(void* args, void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void __fastcall sub_48EE80(BoundFuncDesc* self, void* unused, void* a, void* b, void* c)
{
    bool result;
    void* local18 = 0;
    void* local1c = 0;

    result = sub_4879D0(&local18, &local1c);
    if (result) {
        if (local1c) {
            RefCounted* rc = (RefCounted*)local1c;
            _InterlockedExchangeAdd(&rc->refCount, -1);
        }
        return;
    }

    self->vftable = (void*)0x48A260;
    self->function = (void*)0x48E2C0;

    void* mem = sub_62FEF6(8);
    if (mem) {
        *(void**)mem = local18;
        *(void**)((char*)mem + 4) = local1c;
        if (local1c) {
            RefCounted2* rc = (RefCounted2*)local1c;
            _InterlockedExchangeAdd(&rc->refCount, 1);
        }
    }
    self->signature = mem;

    if (local1c) {
        RefCounted* rc = (RefCounted*)local1c;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = *(void***)rc;
            ((void(__thiscall*)(void*))vt[1])(rc);
            RefCounted2* rc2 = (RefCounted2*)rc;
            if (_InterlockedExchangeAdd(&rc2->refCount2, -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void(__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }
}
