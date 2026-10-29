// roc 2011-06 006a5d40  unit: RBX::Geometry  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a5d40
//
// 006a5d40  8b442404             mov eax, dword ptr [esp + 4]
// 006a5d44  d981d0010000         fld dword ptr [ecx + 0x1d0]
// 006a5d4a  d918                 fstp dword ptr [eax]
// 006a5d4c  d981d4010000         fld dword ptr [ecx + 0x1d4]
// 006a5d52  d95804               fstp dword ptr [eax + 4]
// 006a5d55  d981d8010000         fld dword ptr [ecx + 0x1d8]
// 006a5d5b  d95808               fstp dword ptr [eax + 8]
// 006a5d5e  c20400               ret 4
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