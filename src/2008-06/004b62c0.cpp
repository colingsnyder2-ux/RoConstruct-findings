// from server: 30% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Sub {
    void* vptr;
    int pad[0x2d40/4 - 1];
};

struct Base {
    void* vptr;
};

struct Obj {
    void* vptr;
    char pad0[0x10 - 4];
    void* vptr10;
    void* vptr14;
    char pad1[0x20 - 0x18];
    void* vptr20;
    void* vptr24;
    char pad2[0x44 - 0x28];
    void* vptr44;
    char pad3[0x64 - 0x48];
    void* vptr64;
    char pad4[0x84 - 0x68];
    void* vptr84;
    char pad5[0xa4 - 0x88];
    void* vptra4;
    char pad6[0xc4 - 0xa8];
    void* vptrc4;
    char pad7[0x158 - 0xc8];
    void* field158;
    void* field15c;
    void* field160;
    void* field164;
    void* field168;
    void* field16c;
    void* field170;
    void* field174;
    void* field178;
};

struct Arg {
    void* p0;
    void* p4;
};

extern "C" void __cdecl sub_45ebe0();
extern "C" void __cdecl sub_4b60c0();
extern "C" void* __cdecl sub_5c9c70();
extern "C" void* __cdecl sub_5ca240();

void* __fastcall target(Obj* self, void* edx, Arg* arg, int b);

void* __fastcall target(Obj* self, void* edx, Arg* arg, int b)
{
    sub_45ebe0();
    self->vptr = (void*)0x824fbc;
    self->vptr10 = (void*)0x824fb0;
    self->vptr14 = (void*)0x824fa8;
    self->vptr20 = (void*)0x824fa0;
    self->vptr24 = (void*)0x824f90;
    self->vptr44 = (void*)0x824f80;
    self->vptr64 = (void*)0x824f70;
    self->vptr84 = (void*)0x824f60;
    self->vptra4 = (void*)0x824f50;
    self->vptrc4 = (void*)0x824f40;
    self->field168 = arg->p0;
    self->field16c = arg->p4;
    if (arg->p4 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)arg->p4 + 4), 1);
    }
    self->field174 = 0;
    self->field178 = 0;
    self->field170 = (void*)b;
    self->field160 = sub_5c9c70();
    void* p = *(void**)((char*)arg->p0 + 0x2d40);
    void* r = sub_5ca240();
    sub_4b60c0();
    self->field15c = sub_5c9c70();
    void* q1 = *(void**)((char*)arg->p0 + 0x2d3c);
    sub_5ca240();
    void* q2 = *(void**)((char*)arg->p0 + 0x2d44);
    sub_5ca240();
    void* q3 = *(void**)((char*)arg->p0 + 0x2d48);
    sub_5ca240();
    void* q4 = *(void**)((char*)arg->p0 + 0x2d1c);
    void* ebx = sub_5ca240();
    void* q5 = *(void**)((char*)arg->p0 + 0x2d20);
    sub_5ca240();
    void* q6 = *(void**)((char*)arg->p0 + 0x2d28);
    sub_5ca240();
    void* q7 = *(void**)((char*)arg->p0 + 0x2d30);
    sub_5ca240();
    void* q8 = *(void**)((char*)arg->p0 + 0x2d34);
    void* ebp = sub_5ca240();
    void* q9 = *(void**)((char*)arg->p0 + 0x2d38);
    sub_5ca240();
    void* q10 = *(void**)((char*)arg->p0 + 0x2d24);
    sub_5ca240();
    void* q11 = *(void**)((char*)arg->p0 + 0x2d2c);
    sub_5ca240();
    self->field164 = sub_5c9c70();
    self->field158 = sub_5c9c70();
    return self;
}
