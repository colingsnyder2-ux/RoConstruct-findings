// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct FuncDescBase {
    void* vptr;
    void* function;
    void* name;
};

struct BoundFuncDesc {
    void* vptr;
    void* function;
    void* name;
    void* args;
    int Init(void* a, void* b, void* c);
};

extern "C" int __cdecl sub_4879D0(void* out);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

int BoundFuncDesc::Init(void* a, void* b, void* c)
{
    void* local[2];
    local[0] = 0;
    local[1] = 0;

    if (sub_4879D0(local)) {
        if (local[1]) {
            RefCounted* rc = (RefCounted*)local[1];
            _InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1);
        }
        return 0;
    }

    *(void**)((char*)this + 8) = (void*)0x419680;
    *(void**)this = (void*)0x417e90;

    void* mem = sub_62FEF6(8);
    if (mem) {
        *(void**)mem = local[0];
        *(void**)((char*)mem + 4) = local[1];
        if (local[1]) {
            _InterlockedExchangeAdd((volatile long*)((char*)local[1] + 4), 1);
        }
    }
    *(void**)((char*)this + 4) = mem;

    if (local[1]) {
        RefCounted* rc = (RefCounted*)local[1];
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
            void** vt = *(void***)rc;
            ((void (__thiscall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void (__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }

    return 0;
}
