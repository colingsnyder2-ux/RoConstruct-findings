// roc 2009-06 005257d0  unit: RBX::SceneManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005257d0
//
// 005257d0  8b442404             mov eax, dword ptr [esp + 4]
// 005257d4  d981d0010000         fld dword ptr [ecx + 0x1d0]
// 005257da  d918                 fstp dword ptr [eax]
// 005257dc  d981d4010000         fld dword ptr [ecx + 0x1d4]
// 005257e2  d95804               fstp dword ptr [eax + 4]
// 005257e5  d981d8010000         fld dword ptr [ecx + 0x1d8]
// 005257eb  d95808               fstp dword ptr [eax + 8]
// 005257ee  c20400               ret 4
// copied from an identical function in another client (function ?getVector@CSHA1@@QBE?AUVector3@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Vector3 {
    float x, y, z;
};

struct CSHA1 {
    char padding[0x1d0];
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