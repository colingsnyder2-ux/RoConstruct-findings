// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Instance {
    char pad0[0xf8];
    void* field_f8;
    char pad_fc[0xfc];
    void* field_fc;
    void* field_100;
    void* field_104;
    void* field_108;
    Instance* construct(void*);
};

struct JointInstance {
    char pad[0x100];
    JointInstance* construct(void*);
};

extern void __stdcall sub_5b1170(void*);
extern void __stdcall sub_630bdc(void*);
extern void* __stdcall sub_573d40(void*);
extern void* __stdcall sub_5e49e0(void*, void*);
extern void __stdcall sub_402a60(void*, void*);

JointInstance* JointInstance::construct(void* arg)
{
    sub_5b1170(arg);
    *(int*)((char*)this + 0x00) = 0x7b624c;
    *(int*)((char*)this + 0x04) = 0x7b6244;
    *(int*)((char*)this + 0x10) = 0x7b623c;
    *(int*)((char*)this + 0x14) = 0x7b622c;
    *(int*)((char*)this + 0x2c) = 0x7b621c;
    *(int*)((char*)this + 0x44) = 0x7b620c;
    *(int*)((char*)this + 0x5c) = 0x7b61fc;
    *(int*)((char*)this + 0x74) = 0x7b61ec;
    *(int*)((char*)this + 0x8c) = 0x7b61dc;
    *(int*)((char*)this + 0xe8) = 0x7b61c4;
    sub_630bdc((char*)this + 0xfc);
    void* p1 = sub_573d40(*(void**)((char*)this + 0xf8));
    void* p2 = sub_573d40(*(void**)((char*)this + 0xf8));
    void* r1 = sub_5e49e0((char*)this + 0xfc, p1);
    *(void**)((char*)this + 0xfc) = *(void**)r1;
    sub_402a60((char*)this + 0x100, (char*)r1 + 4);
    void* r2 = sub_5e49e0((char*)this + 0x104, p2);
    *(void**)((char*)this + 0x104) = *(void**)r2;
    sub_402a60((char*)this + 0x108, (char*)r2 + 4);
    return this;
}
