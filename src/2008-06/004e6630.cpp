// from server: 32% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl G1_func_005a3380();
extern "C" bool __cdecl func_00422ae0(void*);

struct GImage {
    void Release();
};

struct RefCounted {
    void* vptr;
    long refcount;
    long refcount2;
    void Release();
};

struct Part {
    char pad0[4];
    void* field4;
    char pad8[0xc8];
    void* field_d0;
    void* field_d8;
    void Release();
};

void GImage::Release()
{
    void* p = *(void**)((char*)this + 8);
    if (p) {
        void** vt = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vt[1];
        fn(p);
    }
}

void RefCounted::Release()
{
    if (_InterlockedExchangeAdd(&refcount, -1) == 1) {
        void** vt = *(void***)this;
        void (*fn)(void*) = (void (*)(void*))vt[1];
        fn(this);
    }
    if (_InterlockedExchangeAdd(&refcount2, -1) == 1) {
        void** vt = *(void***)this;
        void (*fn)(void*) = (void (*)(void*))vt[2];
        fn(this);
    }
}

void Part::Release()
{
    void* saved = this;
    void* p = field_d8;
    if (p) {
        void* r = G1_func_005a3380();
        if (r) {
            void* q = *(void**)((char*)field_d8 + 0x104);
            if (r == q) {
                goto done;
            }
            if (q && func_00422ae0(r)) {
                goto done;
            }
        }
    }
    {
        void* local = 0;
        _InterlockedExchangeAdd((volatile long*)&field4, 1);
        void* obj = field_d0;
        void* inner = *(void**)((char*)obj + 4);
        void** vt = *(void***)inner;
        void (*fn)(void*, void**) = (void (*)(void*, void**))vt[2];
        fn(inner, &local);
        if (local) {
            void* lp = (char*)local + 4;
            if (_InterlockedExchangeAdd((volatile long*)lp, -1) == 1) {
                GImage* g = (GImage*)local;
                g->Release();
                if (local) {
                    void** vt2 = *(void***)local;
                    void (*fn2)(void*, int) = (void (*)(void*, int))vt2[0];
                    fn2(local, 1);
                }
            }
        }
        local = 0;
    }
done:
    if (saved) {
        RefCounted* rc = (RefCounted*)saved;
        rc->Release();
    }
}
