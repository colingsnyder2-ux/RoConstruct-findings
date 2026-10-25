// from server: 100% by tester
// roc 2008-06 00599850  unit: RBX::PartInstance  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599850
//
// 00599850  56                   push esi
// 00599851  8bb1c8020000         mov esi, dword ptr [ecx + 0x2c8]
// 00599857  8bce                 mov ecx, esi
// 00599859  e802fbffff           call 0x599360
// 0059985e  8d86c4000000         lea eax, [esi + 0xc4]
// 00599864  5e                   pop esi
// 00599865  c3                   ret 

struct Vector3 { float x, y, z; };

struct Body {
    char pad[0xc4];
    Vector3 value;
    void updatePV();
};

struct PartInstance {
    char pad[0x2c8];
    Body* body;
    const Vector3& getValue();
};

const Vector3& PartInstance::getValue()
{
    Body* b = body;
    b->updatePV();
    return b->value;
}
