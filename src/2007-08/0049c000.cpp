// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct FuncDescBase {
    int field0;
    int field4;
    int field8;
    void init(int, RefCounted*);
};

struct BoundFuncDesc {
    int field0;
    int field4;
    int field8;
    BoundFuncDesc(int, RefCounted*);
};

BoundFuncDesc::BoundFuncDesc(int a, RefCounted* b)
{
    field0 = 0;
    field4 = 0;
    field8 = 0;
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    ((FuncDescBase*)this)->init(a, b);
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            (*(void (__thiscall**)(RefCounted*))(*(int*)b + 4))(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                (*(void (__thiscall**)(RefCounted*))(*(int*)b + 8))(b);
            }
        }
    }
}
