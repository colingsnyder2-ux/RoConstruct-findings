// from server: 100% by king_originala
// roc 2008-06 005b6270  unit: RBX::VHat::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6270
//
// 005b6270  83ec10               sub esp, 0x10
// 005b6273  8d0424               lea eax, [esp]
// 005b6276  50                   push eax
// 005b6277  e884ffffff           call 0x5b6200
// 005b627c  d90424               fld dword ptr [esp]
// 005b627f  8b442414             mov eax, dword ptr [esp + 0x14]
// 005b6283  d918                 fstp dword ptr [eax]
// 005b6285  d9442404             fld dword ptr [esp + 4]
// 005b6289  d95804               fstp dword ptr [eax + 4]
// 005b628c  d9442408             fld dword ptr [esp + 8]
// 005b6290  d95808               fstp dword ptr [eax + 8]
// 005b6293  83c410               add esp, 0x10
// 005b6296  c20400               ret 4

struct Color {
    float r, g, b, a;
};

struct Vector3 {
    float x, y, z;
};

struct S {
    Color color() const;
    Vector3 f() const;
};

Vector3 S::f() const {
    Color c = color();
    Vector3 result;
    result.x = c.r;
    result.y = c.g;
    result.z = c.b;
    return result;
}
