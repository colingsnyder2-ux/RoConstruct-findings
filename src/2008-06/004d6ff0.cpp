// from server: 100% by tester
// roc 2008-06 004d6ff0  unit: CSHA1  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6ff0
//
// 004d6ff0  8b442404             mov eax, dword ptr [esp + 4]
// 004d6ff4  d9818c020000         fld dword ptr [ecx + 0x28c]
// 004d6ffa  d918                 fstp dword ptr [eax]
// 004d6ffc  d98190020000         fld dword ptr [ecx + 0x290]
// 004d7002  d95804               fstp dword ptr [eax + 4]
// 004d7005  d98194020000         fld dword ptr [ecx + 0x294]
// 004d700b  d95808               fstp dword ptr [eax + 8]
// 004d700e  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct CSHA1 {
    char padding[0x28c];
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
