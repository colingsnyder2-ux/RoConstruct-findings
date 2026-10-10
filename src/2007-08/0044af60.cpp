// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ErrorUploader_data {
    void* vfptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct ErrorUploader {
    void* _data;
    void construct(void* p, void* a, void* b, ErrorUploader_data* c);
};

void __stdcall helper_44ade0(void* p);

void ErrorUploader::construct(void* p, void* a, void* b, ErrorUploader_data* c)
{
    if (c) {
        _InterlockedExchangeAdd(&c->refcount, 1);
    }
    helper_44ade0(p);
    if (c) {
        if (_InterlockedExchangeAdd(&c->refcount, -1) == 1) {
            void** vtbl = *(void***)c;
            ((void (__thiscall*)(ErrorUploader_data*))vtbl[1])(c);
            if (_InterlockedExchangeAdd(&c->weakrefcount, -1) == 1) {
                void** vtbl2 = *(void***)c;
                ((void (__thiscall*)(ErrorUploader_data*))vtbl2[2])(c);
            }
        }
    }
}
