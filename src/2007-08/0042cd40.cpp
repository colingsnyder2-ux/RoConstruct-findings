// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
    virtual void OnFinalRelease();
    virtual void OnFinalRelease2();
    long refCount;
    long weakCount;
};

struct Binder {
    int field0;
    int field4;
    int field8;
    void Init(int a, int b, int c, RefCounted* p);
};

void Binder::Init(int a, int b, int c, RefCounted* p)
{
    field0 = 0;
    field4 = 0;
    field8 = 0;
    int local[4];
    local[0] = a;
    local[1] = b;
    local[2] = c;
    local[3] = (int)p;
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    ((void (__thiscall*)(Binder*, int*))0x42cb00)(this, local);
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            p->OnFinalRelease();
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                p->OnFinalRelease2();
            }
        }
    }
}
