// from server: 100% by colin
// roc 2007-08 00573f80  unit: RBX::PartInstance  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573f80
//
// 00573f80  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00573f86  56                   push esi
// 00573f87  8b7064               mov esi, dword ptr [eax + 0x64]
// 00573f8a  8bce                 mov ecx, esi
// 00573f8c  e86fc1fbff           call 0x530100
// 00573f91  8d8684000000         lea eax, [esi + 0x84]
// 00573f97  5e                   pop esi
// 00573f98  c3                   ret 

struct Primitive;

struct PartInstance {
    char pad[0x1d8];
    Primitive* primitive;
    Primitive* getPrimitive();
};

struct Primitive {
    char pad0[0x64];
    int field64;
    char pad1[0x84 - 0x68];
    int field84;
    void method530100();
};

Primitive* PartInstance::getPrimitive()
{
    Primitive* p = primitive;
    Primitive* q = (Primitive*)p->field64;
    q->method530100();
    return (Primitive*)((char*)q + 0x84);
}
