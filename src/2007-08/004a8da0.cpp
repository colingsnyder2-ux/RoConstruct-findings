// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Result {
    int a;
    int b;
    int c;
    int d;
    void* e;
};

extern "C" void __cdecl sub_4A6E90(void*, void*, void*);

struct VClient {
    Result* method(int* a, RefCounted* b, int* c, int d);
};

Result* VClient::method(int* a, RefCounted* b, int* c, int d) {
    Result* result;
    int localA;
    int localB;
    int localC;
    int localD;
    void* localE;
    int flag;
    RefCounted* rc1;
    RefCounted* rc2;

    flag = 0;
    rc1 = b;
    if (rc1) {
        _InterlockedExchangeAdd(&rc1->refCount, 1);
    }
    rc2 = (RefCounted*)c;
    if (rc2) {
        _InterlockedExchangeAdd(&rc2->refCount, 1);
    }

    sub_4A6E90(&localA, a, &d);

    result = (Result*)a;
    result->a = localA;
    result->b = localB;
    result->c = localC;
    result->d = localD;
    result->e = localE;
    if (localE) {
        _InterlockedExchangeAdd((volatile long*)((char*)localE + 4), 1);
    }

    flag = 1;

    if (rc2) {
        if (_InterlockedExchangeAdd(&rc2->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc2->vptr)[1])(rc2);
            if (_InterlockedExchangeAdd(&rc2->weakCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc2->vptr)[2])(rc2);
            }
        }
    }

    if (rc1) {
        if (_InterlockedExchangeAdd(&rc1->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc1->vptr)[1])(rc1);
            if (_InterlockedExchangeAdd(&rc1->weakCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc1->vptr)[2])(rc1);
            }
        }
    }

    return result;
}
