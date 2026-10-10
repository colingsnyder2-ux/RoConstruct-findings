// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct String {
    char buf[28];
};

struct P8Players {
    void* field0;
    void* field4;
    void* field8;
    void impl(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i);
};

extern "C" void __cdecl sub_413C00(void*);
extern "C" void __cdecl sub_414170(void*);
extern "C" void __stdcall sub_77E69C(void*);
extern "C" void __stdcall sub_77E6AC(void*);

void P8Players::impl(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i)
{
    if (field0 == 0) {
        char tmp[28];
        sub_413C00(tmp);
        sub_414170(tmp);
    }

    RefCounted* rc = (RefCounted*)h;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refCount, 1);
    }

    void* local[7];
    sub_77E69C(local);

    void (*fn)(void*) = (void (*)(void*))field8;
    fn(field4);

    sub_77E6AC(local);

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void (*dtor)(void*) = *(void (**)(void*))rc->vptr;
            dtor(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void (*dtor2)(void*) = *(void (**)(void*))((char*)rc->vptr + 8);
                dtor2(rc);
            }
        }
    }
}
