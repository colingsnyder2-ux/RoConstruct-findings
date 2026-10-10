// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refs;
};

struct Inner {
    char pad[8];
    long refs;
};

struct Holder {
    void* ptr;
    Inner* inner;
};

struct Outer {
    char pad[0xa4];
    Holder holder;
};

struct Target {
    void* field0;
    void* field4;
    void assign(void* p, void* q);
};

void __stdcall sub_4074E0(void* a, void* b);

void Target::assign(void* p, void* q)
{
    this->field0 = p;
    sub_4074E0(q, p);
    this->field4 = 0;
    if (p != 0) {
        Outer* o = (Outer*)((char*)p + 0xa4);
        if (o != 0) {
            o->holder.ptr = p;
            Inner* old = (Inner*)this->field4;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refs, 1);
            }
            Inner* cur = o->holder.inner;
            if (cur != 0) {
                if (_InterlockedExchangeAdd(&cur->refs, -1) == 1) {
                    void** vt = *(void***)cur;
                    void (*dtor)(void*) = (void (*)(void*))vt[2];
                    dtor(cur);
                }
            }
            o->holder.inner = old;
        }
    }
}
