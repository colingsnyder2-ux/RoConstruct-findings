// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Ref {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Obj {
    void* vptr;
    volatile long strong;
    volatile long weak;
};

struct Inner {
    char pad[0x130];
};

struct Holder {
    Obj* ptr;
};

struct Caption {
    char pad0[4];
    char pad1[0x24];
    Holder h28;
    Holder h30;
    char pad2[0x15c];

    void method(void* a, void* b, void* c, void* d);
};

extern "C" void __cdecl sub_411b40(void*);
extern "C" void __cdecl sub_5e5a80(void*, void*);
extern "C" void __cdecl sub_456e80(void*);
extern "C" void __cdecl sub_5773c0(void*);
extern "C" void __cdecl sub_4025b0(void*, void*);
extern "C" void __cdecl sub_4153b0(void*);
extern "C" void __cdecl sub_618a40(void*, void*);
extern "C" void __cdecl sub_4218a0(void*, void*);
extern "C" void __cdecl sub_465e40(void*);

void Caption::method(void* a, void* b, void* c, void* d)
{
    Holder tmp;
    tmp.ptr = h28.ptr;
    if (tmp.ptr) {
        _InterlockedExchangeAdd(&tmp.ptr->strong, 1);
    }
    sub_411b40(&tmp);

    void* self = (void*)((char*)this - 0x190);
    void* ctx;
    if (self) {
        ctx = (void*)((char*)this + 4);
    } else {
        ctx = 0;
    }

    if (h30.ptr) {
        sub_5e5a80((char*)h30.ptr + 0x130, ctx);
    }
    sub_456e80(&h30);

    sub_5773c0(&tmp);
    sub_456e80(&h28);

    if (a) {
        h28.ptr = (Obj*)a;
        sub_4025b0(&h28.ptr, &a);

        Obj* p = h28.ptr;
        Holder tmp2;
        tmp2.ptr = p;
        if (p) {
            _InterlockedExchangeAdd(&p->strong, 1);
        }
        sub_411b40(&tmp2);

        Obj* q = h28.ptr;
        void* r;
        if (q) {
            sub_4153b0(q);
            r = q;
        } else {
            r = 0;
        }
        void* out;
        sub_618a40(&out, r);
        h30.ptr = *(Obj**)out;
        sub_4025b0(&h30.ptr, (char*)out + 4);

        Obj* s = (Obj*)out;
        if (s) {
            if (_InterlockedExchangeAdd(&s->strong, -1) == 1) {
                s->vptr;
                ((void (__thiscall*)(Obj*))((void**)s->vptr)[1])(s);
                if (_InterlockedExchangeAdd(&s->weak, -1) == 1) {
                    ((void (__thiscall*)(Obj*))((void**)s->vptr)[2])(s);
                }
            }
        }

        void* self2 = (void*)((char*)this - 0x190);
        void* ctx2;
        if (self2) {
            ctx2 = (void*)((char*)this + 4);
        } else {
            ctx2 = 0;
        }
        if (h30.ptr) {
            sub_4218a0((char*)h30.ptr + 0x130, ctx2);
        }
        sub_5773c0(&tmp2);
    }

    if (h30.ptr == 0) {
        sub_465e40((char*)this - 0x190);
    }

    Obj* t = (Obj*)b;
    if (t) {
        if (_InterlockedExchangeAdd(&t->strong, -1) == 1) {
            ((void (__thiscall*)(Obj*))((void**)t->vptr)[1])(t);
            if (_InterlockedExchangeAdd(&t->weak, -1) == 1) {
                ((void (__thiscall*)(Obj*))((void**)t->vptr)[2])(t);
            }
        }
    }

    Obj* u = (Obj*)c;
    if (u) {
        if (_InterlockedExchangeAdd(&u->strong, -1) == 1) {
            ((void (__thiscall*)(Obj*))((void**)u->vptr)[1])(u);
            if (_InterlockedExchangeAdd(&u->weak, -1) == 1) {
                ((void (__thiscall*)(Obj*))((void**)u->vptr)[2])(u);
            }
        }
    }
}
