// from server: 100% by king_originala
// roc 2008-06 005ef1e0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef1e0
//
// 005ef1e0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005ef1e3  8b01                 mov eax, dword ptr [ecx]
// 005ef1e5  8b542404             mov edx, dword ptr [esp + 4]
// 005ef1e9  8b4008               mov eax, dword ptr [eax + 8]
// 005ef1ec  52                   push edx
// 005ef1ed  ffd0                 call eax
// 005ef1ef  8d4c2404             lea ecx, [esp + 4]
// 005ef1f3  51                   push ecx
// 005ef1f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef1f8  89442408             mov dword ptr [esp + 8], eax
// 005ef1fc  e81fffffff           call 0x5ef120
// 005ef201  c20800               ret 8

struct Access {
    virtual void slot0();
    virtual void slot1();
    virtual int get(int);
};

struct Result {
    void assign(const int*);
};

struct Descriptor {
    unsigned char padding[28];
    Access* access;

    void read(int, Result*);
};

void Descriptor::read(int value, Result* result)
{
    value = access->get(value);
    result->assign(&value);
}
