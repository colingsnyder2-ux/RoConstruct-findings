// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Vec8 {
    char* begin;
    char* end;
};

struct Replicator {
    char pad[0x134];
    Vec8 nuggets;
};

struct Nugget {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

extern "C" int __cdecl sub_48CF60();
extern "C" void __cdecl sub_48AD70(void*);
extern "C" void* __cdecl sub_4874A0();
extern "C" void __cdecl sub_725520(void*, void*, void*);
extern "C" void __cdecl sub_402A60(void*, void*);
extern "C" void __cdecl sub_541630(void*, void*);
extern "C" void __cdecl invalid_parameter_noinfo();

extern void* g_8bdccc;
extern void* g_487bf0;

int Replicator_addNugget(Replicator* self, void* a, void* b);

int Replicator_addNugget(Replicator* self, void* a, void* b)
{
    void* local10 = 0;
    void* local14 = 0;
    int local20 = 0;

    if (sub_48CF60() != 0)
        return (int)a;

    sub_48AD70(&local10);

    void* ebx = local10;

    sub_725520(&g_8bdccc, &g_487bf0, 0);
    void* edi = sub_4874A0();

    char* begin = self->nuggets.begin;
    if (begin == 0)
        invalid_parameter_noinfo();
    else {
        int count = (int)((self->nuggets.end - begin) >> 3);
        if ((int)edi >= count)
            invalid_parameter_noinfo();
    }

    char* slot = self->nuggets.begin + ((int)edi) * 8;
    *(void**)slot = local10;
    sub_402A60(slot + 4, &local14);

    sub_541630(ebx, self);

    RefCounted* rc = (RefCounted*)local14;
    local20 = -1;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            void (*dtor)(void*) = (void (*)(void*))vt[1];
            dtor(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void (*dtor2)(void*) = (void (*)(void*))vt[2];
                dtor2(rc);
            }
        }
    }

    return (int)ebx;
}
