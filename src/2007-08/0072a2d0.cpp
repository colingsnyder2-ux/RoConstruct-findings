// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Conn {
    char pad0[0xc];
    int f0c;
    int f10;
    int* f14;
};

struct Slot {
    char pad0[0x18];
    int f18;
};

struct Map {
    char pad0[0x18];
    Slot* f18;
};

struct Iter {
    char pad0[0x18];
};

struct Obj {
    char pad0[0x18];
    Map* f18;
};

struct Tmp {
    char pad0[0x1c];
    int f1c;
    int f20;
    int f24;
    int f28;
};

extern "C" {
    void* __cdecl sub_729030(void*);
    void __cdecl sub_728c40(void*);
    void __cdecl sub_729690(void*, void*, void*);
    void __cdecl sub_729b30(void*, void*, void*, void*, void*);
    void __cdecl sub_727770(void*);
    void __cdecl sub_7276b0(void*);
    void __cdecl sub_62fc62(void*);
    int __cdecl sub_728dc0(void*, void*, void*);
}

void __stdcall sub_72a2d0(Obj* self, Conn* a2)
{
    void* p = sub_729030(a2);
    Iter* it = (Iter*)p;
    if (self == 0) {
        _invalid_parameter_noinfo();
    }
    if (it != (Iter*)self->f18) {
        Conn* c = (Conn*)((char*)it + 0xc);
        int v0 = c->f0c;
        int v1 = c->f10;
        int* v2 = c->f14;
        if (v2 != 0) {
            _InterlockedExchangeAdd((volatile long*)(v2 + 1), 1);
        }
        int w0 = a2->f0c;
        int w1 = a2->f10;
        int* w2 = a2->f14;
        if (w2 != 0) {
            _InterlockedExchangeAdd((volatile long*)(w2 + 1), 1);
        }
        if (sub_728dc0(self, &v0, &w0) == 0) {
            goto done;
        }
    }
    {
        Tmp t;
        sub_728c40(&t);
        t.f20 = t.f1c;
        t.f24 = 0;
        sub_729690(&t, a2, &t.f1c);
        sub_729b30(self, &t, it, a2, &t.f1c);
        void* r = (void*)t.f1c;
        int r2 = t.f20;
        sub_727770(&t.f24);
        t.f28 = -1;
        sub_7276b0(&t.f1c);
        sub_62fc62((void*)t.f20);
        t.f20 = 0;
        (void)r;
        (void)r2;
    }
done:
    if (it == 0) {
        _invalid_parameter_noinfo();
    }
    if (it == (Iter*)self->f18) {
        _invalid_parameter_noinfo();
    }
}
