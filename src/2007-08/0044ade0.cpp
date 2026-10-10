// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ErrorUploaderData {
    char pad0[8];
    volatile long refcount;
};

struct ErrorUploader {
    void* vptr;
    ErrorUploaderData* data;
    void* field8;
    ErrorUploader(ErrorUploaderData* p, int a, int b, int c);
};

extern "C" int __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

ErrorUploader::ErrorUploader(ErrorUploaderData* p, int a, int b, int c)
{
    ErrorUploaderData* local = 0;
    if (!sub_4879D0(&local)) {
        this->field8 = (void*)0x44A270;
        this->vptr = (void*)0x44AA90;
        ErrorUploaderData* mem = (ErrorUploaderData*)sub_62FEF6(0xC);
        if (mem) {
            mem->pad0[0] = 0;
            *(int*)(mem->pad0 + 4) = 0;
            mem->refcount = 0;
            if (mem->refcount) {
                _InterlockedExchangeAdd(&mem->refcount, 1);
            }
        }
        this->data = mem;
    }
    if (local) {
        if (_InterlockedExchangeAdd(&local->refcount, -1) == 1) {
            void** vt = *(void***)local;
            ((void (__thiscall*)(void*))vt[1])(local);
            if (_InterlockedExchangeAdd(&local->refcount, -1) == 1) {
                void** vt2 = *(void***)local;
                ((void (__thiscall*)(void*))vt2[2])(local);
            }
        }
    }
}
