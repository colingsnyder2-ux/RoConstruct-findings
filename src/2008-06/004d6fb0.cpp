// from server: 100% by tester
// roc 2008-06 004d6fb0  unit: CSHA1  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6fb0
//
// 004d6fb0  8b442404             mov eax, dword ptr [esp + 4]
// 004d6fb4  d9817c020000         fld dword ptr [ecx + 0x27c]
// 004d6fba  d918                 fstp dword ptr [eax]
// 004d6fbc  d98180020000         fld dword ptr [ecx + 0x280]
// 004d6fc2  d95804               fstp dword ptr [eax + 4]
// 004d6fc5  d98184020000         fld dword ptr [ecx + 0x284]
// 004d6fcb  d95808               fstp dword ptr [eax + 8]
// 004d6fce  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct CSHA1 {
    char padding[0x27c];
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
