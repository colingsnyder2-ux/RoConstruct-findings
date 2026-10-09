// from server: 15% by colin
// roc 2007-08 005ebdb0  unit: RBX::BodyMover  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ebdb0
//
// 005ebdb0  d94618               fld dword ptr [esi + 0x18]
// 005ebdb3  decb                 fmulp st(3)
// 005ebdb5  d9cb                 fxch st(3)
// 005ebdb7  dec2                 faddp st(2)
// 005ebdb9  d9461c               fld dword ptr [esi + 0x1c]
// 005ebdbc  decc                 fmulp st(4)
// 005ebdbe  d9c9                 fxch st(1)
// 005ebdc0  dec3                 faddp st(3)
// 005ebdc2  d864242c             fsub dword ptr [esp + 0x2c]
// 005ebdc6  d95c2420             fstp dword ptr [esp + 0x20]
// 005ebdca  d8642430             fsub dword ptr [esp + 0x30]
// 005ebdce  d95c2424             fstp dword ptr [esp + 0x24]
// 005ebdd2  d8642434             fsub dword ptr [esp + 0x34]
// 005ebdd6  d95c2428             fstp dword ptr [esp + 0x28]
// 005ebdda  e8c1bbffff           call 0x5e79a0
// 005ebddf  5f                   pop edi
// 005ebde0  5e                   pop esi
// 005ebde1  5b                   pop ebx
// 005ebde2  5d                   pop ebp
// 005ebde3  83c454               add esp, 0x54
// 005ebde6  c20400               ret 4
// 005ebde9  ddd9                 fstp st(1)
// 005ebdeb  ddd8                 fstp st(0)
// 005ebded  5d                   pop ebp
// 005ebdee  83c454               add esp, 0x54
// 005ebdf1  c20400               ret 4

struct BodyMover {
    char pad0[0x18];
    float m_a;
    float m_b;
    void computeForce(float, float, float, float, float, float);
};

void BodyMover::computeForce(float a, float b, float c, float d, float e, float f)
{
    float x = m_a * d + a - d;
    float y = m_b * e + b - e;
    float z = c - f;
    float w = 0.0f;
    (void)x; (void)y; (void)z; (void)w;
    extern void func_005e79a0();
    func_005e79a0();
}
