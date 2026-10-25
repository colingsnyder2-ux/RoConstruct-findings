// from server: 100% by king_originala
// roc 2008-06 0062e090  unit: RBX::GeometryService  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e090
//
// 0062e090  8b442404             mov eax, dword ptr [esp + 4]
// 0062e094  d98168010000         fld dword ptr [ecx + 0x168]
// 0062e09a  d918                 fstp dword ptr [eax]
// 0062e09c  d9816c010000         fld dword ptr [ecx + 0x16c]
// 0062e0a2  d95804               fstp dword ptr [eax + 4]
// 0062e0a5  d98170010000         fld dword ptr [ecx + 0x170]
// 0062e0ab  d95808               fstp dword ptr [eax + 8]
// 0062e0ae  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct S {
    char pad[360];
    float x, y, z;
    Vector3 f();
};

Vector3 S::f()
{
    Vector3 result;
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}
