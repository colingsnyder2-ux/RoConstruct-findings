// from server: 31% by colin
// roc 2007-08 0062e240  unit: RBX::AdornG3D  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062e240
//
// 0062e240  d95c242c             fstp dword ptr [esp + 0x2c]
// 0062e244  d944242c             fld dword ptr [esp + 0x2c]
// 0062e248  d9542440             fst dword ptr [esp + 0x40]
// 0062e24c  d95c244c             fstp dword ptr [esp + 0x4c]
// 0062e250  d9ca                 fxch st(2)
// 0062e252  d95c2444             fstp dword ptr [esp + 0x44]
// 0062e256  d9542448             fst dword ptr [esp + 0x48]
// 0062e25a  d95c2454             fstp dword ptr [esp + 0x54]
// 0062e25e  d9c9                 fxch st(1)
// 0062e260  d9542450             fst dword ptr [esp + 0x50]
// 0062e264  d95c245c             fstp dword ptr [esp + 0x5c]
// 0062e268  d95c2458             fstp dword ptr [esp + 0x58]
// 0062e26c  ffd2                 call edx
// 0062e26e  83c601               add esi, 1
// 0062e271  83fe02               cmp esi, 2
// 0062e274  0f8c16ffffff         jl 0x62e190
// 0062e27a  83c301               add ebx, 1
// 0062e27d  83fb02               cmp ebx, 2
// 0062e280  0f8cbafeffff         jl 0x62e140
// 0062e286  5f                   pop edi
// 0062e287  5e                   pop esi
// 0062e288  5b                   pop ebx
// 0062e289  83c450               add esp, 0x50
// 0062e28c  c3                   ret 

struct AdornG3D {
    void func_0062e240();
};

void AdornG3D::func_0062e240()
{
    float f0, f1, f2;
    int i, j;
    void (*fn)(void*, float, float, float, float, float, float, float, float, float, float, float, float);

    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            f0 = 0.0f;
            f1 = 0.0f;
            f2 = 0.0f;
            fn(0, f0, f1, f2, f0, f1, f2, f0, f1, f2, f0, f1, f2);
        }
    }
}
