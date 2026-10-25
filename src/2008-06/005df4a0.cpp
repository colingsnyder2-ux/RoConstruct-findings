// from server: 100% by tester
// roc 2008-06 005df4a0  unit: RBX::Message  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df4a0
//
// 005df4a0  8b442404             mov eax, dword ptr [esp + 4]
// 005df4a4  d98154020000         fld dword ptr [ecx + 0x254]
// 005df4aa  d918                 fstp dword ptr [eax]
// 005df4ac  d98158020000         fld dword ptr [ecx + 0x258]
// 005df4b2  d95804               fstp dword ptr [eax + 4]
// 005df4b5  d9815c020000         fld dword ptr [ecx + 0x25c]
// 005df4bb  d95808               fstp dword ptr [eax + 8]
// 005df4be  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct CSHA1 {
    char padding[0x254];
    float x, y, z;
    Vector3 getVector() const;
};

Vector3 CSHA1::getVector() const {
    Vector3 result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}
