// from server: 100% by tester
// roc 2008-06 005e82c0  unit: RBX::Primitive  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e82c0
//
// 005e82c0  56                   push esi
// 005e82c1  8bb1a0000000         mov esi, dword ptr [ecx + 0xa0]
// 005e82c7  8bce                 mov ecx, esi
// 005e82c9  e89210fbff           call 0x599360
// 005e82ce  8d8694000000         lea eax, [esi + 0x94]
// 005e82d4  5e                   pop esi
// 005e82d5  c3                   ret 

struct Vector3 { float x, y, z; };

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct Primitive {
    char pad[0xa0];
    Body* body;
    const Vector3& getValue();
};

const Vector3& Primitive::getValue()
{
    Body* b = body;
    b->updatePV();
    return b->value;
}
