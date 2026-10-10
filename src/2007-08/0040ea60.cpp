// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Sub94 {
    void** vptr;
};

struct Sub90 {
    void** vptr;
};

struct VPlayer {
    void** vptr;
    char pad[0x8c];
    Sub90* sub90;
    Sub94 sub94;
    char pad2[0x8];
    RefCounted* refA0;
};

extern "C" void __stdcall sub_40E850(int, int);
extern "C" void __cdecl sub_63022C(Sub94*);
extern "C" void __cdecl sub_6302F2(VPlayer*);

void VPlayer_dtor(VPlayer* self)
{
    self->vptr = (void**)0x78661c;
    sub_40E850(0, 0);

    RefCounted* p = self->refA0;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = p->vptr;
            void (*f1)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            f1(p);
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                void (*f2)(RefCounted*) = (void (*)(RefCounted*))vt[2];
                f2(p);
            }
        }
    }

    self->sub94.vptr = (void**)0x7864c8;
    sub_63022C(&self->sub94);

    RefCounted* q = (RefCounted*)self->sub90;
    if (q) {
        if (_InterlockedExchangeAdd(&q->refCount, -1) == 1) {
            void** vt = q->vptr;
            void (*f1)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            f1(q);
            if (_InterlockedExchangeAdd(&q->weakCount, -1) == 1) {
                void (*f2)(RefCounted*) = (void (*)(RefCounted*))vt[2];
                f2(q);
            }
        }
    }

    sub_6302F2(self);
}
