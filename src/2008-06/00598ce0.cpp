// from server: 100% by king_originala
// roc 2008-06 00598ce0  unit: RBX::PartInstance  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598ce0
//
// 00598ce0  8b89c4020000         mov ecx, dword ptr [ecx + 0x2c4]
// 00598ce6  8b442404             mov eax, dword ptr [esp + 4]
// 00598cea  d94104               fld dword ptr [ecx + 4]
// 00598ced  83c104               add ecx, 4
// 00598cf0  d918                 fstp dword ptr [eax]
// 00598cf2  d94104               fld dword ptr [ecx + 4]
// 00598cf5  d95804               fstp dword ptr [eax + 4]
// 00598cf8  d94108               fld dword ptr [ecx + 8]
// 00598cfb  d95808               fstp dword ptr [eax + 8]
// 00598cfe  c20400               ret 4

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
};

struct Body {
    char pad[4];
    Vector3 value;
};

struct PartInstance {
    char pad[0x2c4];
    Body* body;
    Vector3 getValue();
};

Vector3 PartInstance::getValue()
{
    return body->value;
}
