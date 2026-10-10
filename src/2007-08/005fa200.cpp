// from server: 73% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refCount1;
    long refCount2;
};

struct Name {
    void* ptr;
};

struct VSeat {
    char pad[0x2a8];
    Name* name1;
    RefCounted* refCounted;
    char pad2[0x4];
    bool flag;
    char pad3[0x4];
    double value;

    void sub_4fff30();
    void sub_541630(int);
    void destructor();
};

void VSeat::destructor()
{
    sub_4fff30();
    value = 0.0;

    if (name1 != 0) {
        sub_541630(0);
        name1 = 0;

        RefCounted* rc = refCounted;
        refCounted = 0;

        if (rc != 0) {
            if (_InterlockedExchangeAdd(&rc->refCount1, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))rc->vptr[1])(rc);
            }
            if (_InterlockedExchangeAdd(&rc->refCount2, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))rc->vptr[2])(rc);
            }
        }
    }

    flag = false;
}
