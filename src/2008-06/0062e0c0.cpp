// from server: 100% by tester
// roc 2008-06 0062e0c0  unit: RBX::GeometryService  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e0c0
//
// 0062e0c0  8b442404             mov eax, dword ptr [esp + 4]
// 0062e0c4  d98164010000         fld dword ptr [ecx + 0x164]
// 0062e0ca  d918                 fstp dword ptr [eax]
// 0062e0cc  d98168010000         fld dword ptr [ecx + 0x168]
// 0062e0d2  d95804               fstp dword ptr [eax + 4]
// 0062e0d5  d9816c010000         fld dword ptr [ecx + 0x16c]
// 0062e0db  d95808               fstp dword ptr [eax + 8]
// 0062e0de  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct CSHA1 {
    char padding[0x164];
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
