// from server: 100% by king_originala
// roc 2008-06 004d6f80  unit: CSHA1  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6f80
//
// 004d6f80  8b442404             mov eax, dword ptr [esp + 4]
// 004d6f84  d98170020000         fld dword ptr [ecx + 0x270]
// 004d6f8a  d918                 fstp dword ptr [eax]
// 004d6f8c  d98174020000         fld dword ptr [ecx + 0x274]
// 004d6f92  d95804               fstp dword ptr [eax + 4]
// 004d6f95  d98178020000         fld dword ptr [ecx + 0x278]
// 004d6f9b  d95808               fstp dword ptr [eax + 8]
// 004d6f9e  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct CSHA1 {
    char padding[0x270];
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
