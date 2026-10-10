// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
};

struct CreatorBase {
    void* vptr;
    void* ptr;
};

struct Creator : CreatorBase {
    void construct(void* a, void* b);
};

void sub_41C8E0(void* self, void* a, void* b);

void Creator::construct(void* a, void* b)
{
    this->ptr = a;
    sub_41C8E0(&this->vptr, a, b);

    if (a != 0) {
        char* edi = (char*)a + 0xa4;
        if (edi != 0) {
            *(void**)edi = a;

            void* esi = this->ptr;
            if (esi != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)esi + 8), 1);
            }

            void* ecx = *(void**)(edi + 4);
            if (ecx != 0) {
                long old = _InterlockedExchangeAdd((volatile long*)((char*)ecx + 8), -1);
                if (old == 1) {
                    void** vt = *(void***)ecx;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(ecx);
                }
            }

            *(void**)(edi + 4) = esi;
        }
    }
}
