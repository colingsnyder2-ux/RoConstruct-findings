// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct FuncHolder {
    void* storage[2];
};

struct TypedStatsItem {
    void** vptr;
    FuncHolder func;
    void construct(FuncHolder* f);
};

void __stdcall sub_4B17A0(FuncHolder* dest, FuncHolder* src);

void TypedStatsItem::construct(FuncHolder* f)
{
    FuncHolder tmp;
    tmp.storage[0] = f->storage[0];
    tmp.storage[1] = f->storage[1];
    if (tmp.storage[1]) {
        _InterlockedExchangeAdd((volatile long*)((char*)tmp.storage[1] + 4), 1);
    }
    sub_4B17A0(&this->func, &tmp);
    if (tmp.storage[1]) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.storage[1] + 4), -1) == 1) {
            void** vt = *(void***)tmp.storage[1];
            ((void (__thiscall*)(void*))vt[1])(tmp.storage[1]);
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.storage[1] + 8), -1) == 1) {
                void** vt2 = *(void***)tmp.storage[1];
                ((void (__thiscall*)(void*))vt2[2])(tmp.storage[1]);
            }
        }
    }
}
