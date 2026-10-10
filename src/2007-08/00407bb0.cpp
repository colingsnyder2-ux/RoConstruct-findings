// from server: 23% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SharedPtr {
    void* ptr;
    void* control;
};

struct Creator {
    SharedPtr* getShared();
};

struct FactoryProduct {
    SharedPtr* create(SharedPtr* result);
};

SharedPtr* FactoryProduct::create(SharedPtr* result)
{
    SharedPtr tmp;
    tmp.ptr = 0;
    tmp.control = 0;

    SharedPtr* src = ((Creator*)this)->getShared();

    result->ptr = src->ptr;
    result->control = src->control;
    if (result->control) {
        _InterlockedExchangeAdd((volatile long*)((char*)result->control + 4), 1);
    }

    if (tmp.control) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.control + 4), -1) == 1) {
            void** vt = *(void***)tmp.control;
            ((void (__thiscall*)(void*))vt[1])(tmp.control);
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.control + 8), -1) == 1) {
                void** vt2 = *(void***)tmp.control;
                ((void (__thiscall*)(void*))vt2[2])(tmp.control);
            }
        }
    }

    return result;
}
