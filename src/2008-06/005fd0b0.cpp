// from server: 44% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Vec {
    char pad[8];
    void* begin;
    void* end;
};

struct Obj {
    char pad0[0xc];
    void* field_c;
    void* field_10;
    char pad14[0x108 - 0x14];
    Vec* vec108;
    char pad10c[0x148 - 0x10c];
    int field_148;
    char pad14c[0x1a8 - 0x14c];
    int field_1a8;
};

struct RefCounted {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    long ref1;
    long ref2;
};

extern "C" void __stdcall sub_5780e0(void*);
extern "C" void __stdcall sub_55a8f0(void*, void*);
extern "C" void __stdcall sub_5fbf50(void*, int);

struct LocalBackpack {
    void func(int arg);
};

void LocalBackpack::func(int arg)
{
    Obj* self = (Obj*)this;
    void* local;
    int idx;
    int count;
    int i;
    int j;
    RefCounted* rc;

    sub_5780e0(&local);
    sub_55a8f0(self, (void*)this);

    idx = -1;
    if (self->vec108) {
        count = (int)(((char*)self->vec108->end - (char*)self->vec108->begin) >> 3);
    } else {
        count = 0;
    }
    count--;

    if (self->field_1a8 >= 0) {
        if (count < self->field_1a8) {
            idx = count;
        } else {
            idx = self->field_1a8;
        }
    } else {
        idx = count;
    }

    i = count;
    if (i > idx) {
        do {
            Vec* v = self->vec108;
            int sz = (int)(((char*)v->end - (char*)v->begin) >> 3);
            if ((unsigned)(i - 1) >= (unsigned)sz) {
                _invalid_parameter_noinfo();
            }
            void* elem = *(void**)((char*)v->begin + i * 8 - 8);
            Vec* v2 = self->vec108;
            int sz2 = (int)(((char*)v2->end - (char*)v2->begin) >> 3);
            if ((unsigned)i >= (unsigned)sz2) {
                _invalid_parameter_noinfo();
            }
            void* elem2 = *(void**)((char*)v2->begin + i * 8);
            sub_5fbf50(elem2, ((Obj*)elem)->field_148);
            i--;
        } while (i > idx);
    }

    {
        Vec* v = self->vec108;
        int sz = (int)(((char*)v->end - (char*)v->begin) >> 3);
        if ((unsigned)idx >= (unsigned)sz) {
            _invalid_parameter_noinfo();
        }
        void* elem = *(void**)((char*)v->begin + idx * 8);
        sub_5fbf50(elem, arg);
    }

    rc = (RefCounted*)local;
    self->field_1a8 = -1;
    local = (void*)-1;

    if (rc) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            rc->v1();
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                rc->v2();
            }
        }
    }
}
