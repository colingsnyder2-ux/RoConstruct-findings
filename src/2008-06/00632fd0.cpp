// from server: 19% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refcount;
    long weakrefcount;
};

struct Inner {
    void* ptr;
};

struct Holder {
    void* ptr;
};

struct Rocket {
    char pad[0x14c];
    void* field14c;
    Holder holder150;
    char pad2[0x164 - 0x154];
    unsigned char field164;
    void setField(void* p);
};

extern "C" void* __cdecl sub_618a40(void* out, void* in);
extern "C" void __cdecl sub_4025b0(Holder* dst, void* src);
extern "C" void __cdecl sub_40db00(Rocket* self, void* p);

void Rocket::setField(void* p)
{
    if (field14c == p)
        return;

    void* tmp;
    sub_618a40(&tmp, p);
    field14c = *(void**)&tmp;
    void* tmp2 = (char*)&tmp + 4;
    sub_4025b0(&holder150, tmp2);

    void* obj = *(void**)&tmp;
    if (obj != 0) {
        RefCounted* rc = (RefCounted*)obj;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** vt = *(void***)rc;
            void (*fn)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                void** vt2 = *(void***)rc;
                void (*fn2)(RefCounted*) = (void (*)(RefCounted*))vt2[2];
                fn2(rc);
            }
        }
    }

    field164 = 0;
    sub_40db00(this, (void*)0x97cae8);
}
