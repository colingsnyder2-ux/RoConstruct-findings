// from server: 59% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct Lighting {
    char pad[0x218];
    int field218;
    RefCounted* field21c;
    void replaceSky(int);
};

extern "C" int __cdecl sub_570270(int, int);
extern "C" int __cdecl sub_461680(int);
extern "C" void __cdecl sub_52db00(int);
extern "C" void __cdecl sub_5ae960(int, int, int);

void Lighting::replaceSky(int newSky)
{
    if (field218 != newSky) {
        return;
    }
    field218 = 0;
    RefCounted* old = field21c;
    field21c = 0;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))old->vptr[1])(old);
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))old->vptr[2])(old);
            }
        }
    }
    int r = sub_570270(0x8c5bec, (int)(this + 1));
    if (r) {
        sub_5ae960(r + 0x10, (int)&newSky, 1);
    }
    int r2 = sub_461680((int)this);
    if (r2) {
        sub_52db00(r2);
    }
}
