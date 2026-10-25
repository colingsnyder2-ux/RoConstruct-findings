// from server: 100% by tester
// roc 2008-06 005d74d0  unit: Ogre::RbxSceneManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d74d0
//
// 005d74d0  8b442404             mov eax, dword ptr [esp + 4]
// 005d74d4  d981d0010000         fld dword ptr [ecx + 0x1d0]
// 005d74da  d918                 fstp dword ptr [eax]
// 005d74dc  d981d4010000         fld dword ptr [ecx + 0x1d4]
// 005d74e2  d95804               fstp dword ptr [eax + 4]
// 005d74e5  d981d8010000         fld dword ptr [ecx + 0x1d8]
// 005d74eb  d95808               fstp dword ptr [eax + 8]
// 005d74ee  c20400               ret 4

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
