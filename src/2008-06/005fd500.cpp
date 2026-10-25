// from server: 100% by tester
// roc 2008-06 005fd500  unit: RBX::Tool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd500
//
// 005fd500  8b442404             mov eax, dword ptr [esp + 4]
// 005fd504  d981f0010000         fld dword ptr [ecx + 0x1f0]
// 005fd50a  d918                 fstp dword ptr [eax]
// 005fd50c  d981f4010000         fld dword ptr [ecx + 0x1f4]
// 005fd512  d95804               fstp dword ptr [eax + 4]
// 005fd515  d981f8010000         fld dword ptr [ecx + 0x1f8]
// 005fd51b  d95808               fstp dword ptr [eax + 8]
// 005fd51e  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct CSHA1 {
    char padding[0x1f0];
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
