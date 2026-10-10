// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long ref1;
    volatile long ref2;
};

struct COleException {
    void* field0;
    void Release();
};

extern "C" void* __cdecl sub_56C3B0(void*);
extern "C" void* __cdecl sub_56C0A0(void*, int, void*);

void COleException::Release()
{
    void* p = sub_56C3B0(&field0);
    void* obj = *(void**)p;
    void* v = *(void**)obj;
    void* (*fn)(void) = *(void* (**)(void))((char*)v + 4);
    void* result = fn();
    sub_56C0A0(result, 3, obj);
    RefCounted* rc = (RefCounted*)field0;
    field0 = (void*)-1;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            void* vt = *(void**)rc;
            void (*d1)(void) = *(void (**)(void))((char*)vt + 4);
            d1();
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                void* vt2 = *(void**)rc;
                void (*d2)(void) = *(void (**)(void))((char*)vt2 + 8);
                d2();
            }
        }
    }
}
