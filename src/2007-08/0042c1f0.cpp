// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    long refcount;
    long weakrefcount;
};

struct Sub {
    void* vfptr;
    void* field4;
};

struct Obj {
    void* vfptr;
    char pad[0xf4 - 4];
    void* field_f4;
    char pad2[0x100 - 0xf8];
    RefCounted* field_100;
    RefCounted* field_108;
    Sub field_10c;
};

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __cdecl sub_42BAD0(void*);
extern "C" void __cdecl sub_461C80(void*);

void Obj_dtor(Obj* self);

void Obj_dtor(Obj* self)
{
    self->vfptr = (void*)0x78a344;

    sub_42BAD0(&self->field_10c);
    sub_62FC62(self->field_10c.field4);
    self->field_10c.field4 = 0;

    {
        RefCounted* p = self->field_108;
        if (p) {
            if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
                void** vt = (void**)p->vfptr;
                ((void (__thiscall*)(RefCounted*))vt[1])(p);
                if (_InterlockedExchangeAdd(&p->weakrefcount, -1) == 1) {
                    void** vt2 = (void**)p->vfptr;
                    ((void (__thiscall*)(RefCounted*))vt2[2])(p);
                }
            }
        }
    }

    {
        RefCounted* p = self->field_100;
        if (p) {
            if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
                void** vt = (void**)p->vfptr;
                ((void (__thiscall*)(RefCounted*))vt[1])(p);
                if (_InterlockedExchangeAdd(&p->weakrefcount, -1) == 1) {
                    void** vt2 = (void**)p->vfptr;
                    ((void (__thiscall*)(RefCounted*))vt2[2])(p);
                }
            }
        }
    }

    {
        void* p = self->field_f4;
        if (p) {
            void** vt = (void**)p;
            ((void (__thiscall*)(void*))vt[2])(p);
        }
    }

    sub_461C80(self);
}
