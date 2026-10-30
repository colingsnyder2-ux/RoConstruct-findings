// roc 2009-06 00642c10  unit: seg_00640000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00642c10
//
// 00642c10  83ec10               sub esp, 0x10
// 00642c13  8d0424               lea eax, [esp]
// 00642c16  50                   push eax
// 00642c17  e884ffffff           call 0x642ba0
// 00642c1c  d90424               fld dword ptr [esp]
// 00642c1f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00642c23  d918                 fstp dword ptr [eax]
// 00642c25  d9442404             fld dword ptr [esp + 4]
// 00642c29  d95804               fstp dword ptr [eax + 4]
// 00642c2c  d9442408             fld dword ptr [esp + 8]
// 00642c30  d95808               fstp dword ptr [eax + 8]
// 00642c33  83c410               add esp, 0x10
// 00642c36  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QBE?AUVector3@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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