// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Sub1 {
    char pad[0x154];
    int field_154;
};

struct Sub2 {
    char pad[0x10];
    int field_10;
    int field_c;
};

struct Sub3 {
    char pad[0x14c];
    int field_14c;
    int field_148;
};

struct Inner {
    char pad[0x14];
    int field_14;
};

struct Obj {
    char pad[0x14];
    Inner inner;
    char pad2[8];
    int field_20;
};

struct RefObj {
    int* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Helper1 {
    void* method(Inner* self, int);
};

struct Helper2 {
    void* method(void* self, int);
};

extern "C" void* helper1(Inner* self, int);
extern "C" void* helper2(void* self, int);

bool Obj_method(Obj* self) {
    void* p = helper1(&self->inner, 1);
    Sub1* s1 = (Sub1*)p;
    Sub2* s2 = (Sub2*)s1->field_154;
    int count = (s2->field_10 - s2->field_c) >> 3;
    if (count <= 0) {
        return false;
    }

    int val = self->field_20;
    int local8 = val;
    int localc = 0;
    int local10 = 0;
    int local20 = 0;

    void* q = helper2(&local8, 1);
    Sub3* s3 = (Sub3*)q;
    int diff = (s3->field_14c - s3->field_148) & 0xfffffffc;
    bool flag = (diff == 4);

    RefObj* r = (RefObj*)local10;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->ref1, -1) == 1) {
            ((void (__thiscall*)(RefObj*))r->vptr[1])(r);
            if (_InterlockedExchangeAdd(&r->ref2, -1) == 1) {
                ((void (__thiscall*)(RefObj*))r->vptr[2])(r);
            }
        }
    }

    return flag;
}
