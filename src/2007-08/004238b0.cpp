// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Inner {
    char pad[0x14];
};

struct Holder {
    char pad0[0xc];
    Inner* inner;
};

struct Obj {
    void* vptr;
    char pad[4];
    char pad2[0x30 - 8];
    Holder* holder;
    char pad3[0x44 - 0x34];
    int field44;
};

struct Vtbl1 {
    void* pad0;
    void* pad1;
    void* pad2;
    void* pad3;
    void* pad4;
    void* pad5;
    void* pad6;
    void* fn18;
};

struct Vtbl3 {
    char pad[0x14c];
    void* fn14c;
};

struct Vtbl4 {
    void* pad0;
    void* fn4;
    void* fn8;
};

extern "C" void __cdecl sub_40d550(void*);
extern "C" void __cdecl sub_423240(void*, void*);
extern "C" void __cdecl sub_5595a0(void*);

void CRobloxTreeCtrlNode_ctor(Obj* self)
{
    void* vt;
    void* fn;
    void* p;
    void* q;
    RefCounted* rc;
    long old;

    vt = self->vptr;
    fn = *(void**)((char*)vt + 0x18);
    typedef int (__thiscall *Fn18)(Obj*);
    self->field44 = ((Fn18)fn)(self);

    vt = self->vptr;
    fn = *(void**)((char*)vt + 8);
    typedef void (__thiscall *Fn8)(Obj*);
    ((Fn8)fn)(self);

    {
        void* h = self->holder;
        void* hv = *(void**)h;
        void* hf = *(void**)((char*)hv + 0x14c);
        char tmp[8];
        typedef void (__thiscall *Fn14c)(void*, void*);
        ((Fn14c)hf)(h, tmp);
        p = *(void**)tmp;
        q = *(void**)(tmp + 4);
        rc = (RefCounted*)p;
        if (q != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
        }
        sub_40d550(tmp);
        if (rc != 0) {
            old = _InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1);
            if (old == 1) {
                void* rvt = *(void**)rc;
                void* rfn = *(void**)((char*)rvt + 4);
                typedef void (__thiscall *RFn4)(RefCounted*);
                ((RFn4)rfn)(rc);
                old = _InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1);
                if (old == 1) {
                    void* rvt2 = *(void**)rc;
                    void* rfn2 = *(void**)((char*)rvt2 + 8);
                    typedef void (__thiscall *RFn8)(RefCounted*);
                    ((RFn8)rfn2)(rc);
                }
            }
        }
    }

    {
        void* h = self->holder;
        sub_423240((void*)((char*)h + 0x14), (void*)((char*)self + 4));
    }
    {
        void* h = self->holder;
        sub_423240((void*)((char*)h + 0x2c), (void*)((char*)self + 8));
    }

    sub_5595a0((void*)((char*)self + 0x18));
}
