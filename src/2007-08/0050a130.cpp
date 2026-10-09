// from server: 87% by colin
// roc 2007-08 0050a130  unit: G3D::GCamera  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050a130
//
// 0050a130  d9442424             fld dword ptr [esp + 0x24]
// 0050a134  83ec24               sub esp, 0x24
// 0050a137  d95c2420             fstp dword ptr [esp + 0x20]
// 0050a13b  d9442444             fld dword ptr [esp + 0x44]
// 0050a13f  d95c241c             fstp dword ptr [esp + 0x1c]
// 0050a143  d9442440             fld dword ptr [esp + 0x40]
// 0050a147  d95c2418             fstp dword ptr [esp + 0x18]
// 0050a14b  d944243c             fld dword ptr [esp + 0x3c]
// 0050a14f  d95c2414             fstp dword ptr [esp + 0x14]
// 0050a153  d9442438             fld dword ptr [esp + 0x38]
// 0050a157  d95c2410             fstp dword ptr [esp + 0x10]
// 0050a15b  d9442434             fld dword ptr [esp + 0x34]
// 0050a15f  d95c240c             fstp dword ptr [esp + 0xc]
// 0050a163  d9442430             fld dword ptr [esp + 0x30]
// 0050a167  d95c2408             fstp dword ptr [esp + 8]
// 0050a16b  d944242c             fld dword ptr [esp + 0x2c]
// 0050a16f  d95c2404             fstp dword ptr [esp + 4]
// 0050a173  d9442428             fld dword ptr [esp + 0x28]
// 0050a177  d91c24               fstp dword ptr [esp]
// 0050a17a  e871f4ffff           call 0x5095f0
// 0050a17f  8bc1                 mov eax, ecx
// 0050a181  c22400               ret 0x24

struct GCamera {
    void setCoordinateFrame(float, float, float, float, float, float, float, float, float);
};

extern "C" void __cdecl sub_5095f0(float, float, float, float, float, float, float, float, float);

void GCamera::setCoordinateFrame(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
    sub_5095f0(i, h, g, f, e, d, c, b, a);
}
