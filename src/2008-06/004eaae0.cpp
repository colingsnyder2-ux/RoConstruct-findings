// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Part {
    char pad0[0x28];
    char field28[0x30];
    char field58[0x14];
    char field6c[0x14];
    char field80[0x14];
    char field94[0x14];
    char fielda8[0x14];
    char fieldbc[0x14];
    char fieldd0[0x8];
    Part(float, int, int);
};

struct RefCounted {
    int refs;
};

struct Obj {
    void* vptr;
    RefCounted* ref;
};

struct Inner {
    char pad[4];
    Obj* obj;
};

struct Arg {
    Obj* obj;
};

extern "C" void __stdcall sub_4e8160(float);
extern "C" void __stdcall sub_4782d0();
extern "C" void __stdcall sub_4ea720();
extern "C" void __stdcall sub_4ea7c0();
extern "C" void __stdcall sub_4a3340();
extern "C" void __stdcall sub_595540();
extern "C" void __stdcall sub_595370();
extern "C" void __stdcall sub_49f710();
extern "C" void __stdcall sub_4e7ed0();
extern "C" void __stdcall sub_45ad90();
extern "C" void __stdcall sub_42b680();

extern "C" void* __stdcall sub_8021b0(void*);
extern "C" int __stdcall sub_8021ac(void*);

Part::Part(float f, int a, int b)
{
    sub_4e8160(f);
    *(void**)this = (void*)0x826ec4;
    sub_4782d0();
    char* p58 = (char*)this + 0x58;
    *(int*)(p58 + 4) = 0;
    *(int*)(p58 + 8) = 0;
    *(char*)(p58 + 0xc) = 0;
    *(char*)(p58 + 0x10) = 0;
    *(int*)((char*)this + 0x70) = 0;
    *(int*)((char*)this + 0x74) = 0;
    *(char*)((char*)this + 0x78) = 0;
    *(char*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0x88) = 0;
    *(char*)((char*)this + 0x8c) = 0;
    *(char*)((char*)this + 0x90) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 0;
    *(char*)((char*)this + 0xa0) = 0;
    *(char*)((char*)this + 0xa4) = 0;
    *(int*)((char*)this + 0xac) = 0;
    *(int*)((char*)this + 0xb0) = 0;
    *(char*)((char*)this + 0xb4) = 0;
    *(char*)((char*)this + 0xb8) = 0;

    Arg* arg = (Arg*)a;
    *(int*)((char*)this + 0xbc) = *(int*)arg->obj;
    RefCounted* rc = (RefCounted*)arg->obj->ref;
    *(RefCounted**)((char*)this + 0xc0) = rc;
    if (rc != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)rc + 4), 1);
    }
    *(int*)((char*)this + 0xc4) = 0;
    *(char*)((char*)this + 0xc8) = 1;
    *(int*)((char*)this + 0xcc) = 0;
    *(int*)((char*)this + 0xd0) = b;
    *(int*)((char*)this + 0xd4) = 0;

    sub_8021b0((char*)this + 4);

    Inner* inner = (Inner*)b;
    void* vt = *(void**)inner->obj;
    void (*fn)(void*) = *(void (**)(void*))((char*)vt + 4);
    void* tmp = 0;
    fn(&tmp);

    if (tmp != 0) {
        if (sub_8021ac((char*)tmp + 4) == 0) {
            sub_45ad90();
            if (tmp != 0) {
                void* vt2 = *(void**)tmp;
                void (*fn2)(void*, int) = *(void (**)(void*, int))vt2;
                fn2(tmp, 1);
            }
        }
    }

    sub_4ea720();
    sub_4a3340();
    sub_595540();
    sub_595370();
    sub_49f710();

    sub_4ea720();
    sub_4a3340();
    sub_595540();
    sub_595370();
    sub_49f710();

    sub_4ea720();
    sub_4a3340();
    sub_595540();
    sub_595370();
    sub_49f710();

    sub_4ea7c0();
    sub_42b680();
    sub_595540();
    sub_595370();
    sub_49f710();

    if (arg->obj != 0) {
        sub_4e7ed0();
    }
}
