// from server: 94% by colin
// roc 2007-08 0061a9e0  unit: RBX::ContactConnector  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061a9e0
//
// 0061a9e0  56                   push esi
// 0061a9e1  8bf1                 mov esi, ecx
// 0061a9e3  807e0400             cmp byte ptr [esi + 4], 0
// 0061a9e7  7405                 je 0x61a9ee
// 0061a9e9  e822fbffff           call 0x61a510
// 0061a9ee  d9467c               fld dword ptr [esi + 0x7c]
// 0061a9f1  d9ee                 fldz 
// 0061a9f3  d99680000000         fst dword ptr [esi + 0x80]
// 0061a9f9  d99688000000         fst dword ptr [esi + 0x88]
// 0061a9ff  d9c9                 fxch st(1)
// 0061aa01  d99e84000000         fstp dword ptr [esi + 0x84]
// 0061aa07  d9968c000000         fst dword ptr [esi + 0x8c]
// 0061aa0d  d99690000000         fst dword ptr [esi + 0x90]
// 0061aa13  d99e94000000         fstp dword ptr [esi + 0x94]
// 0061aa19  5e                   pop esi
// 0061aa1a  c3                   ret 

struct ContactConnector {
    char pad0[4];
    bool flag4;
    char pad5[0x77];
    float f7c;
    float f80;
    float f84;
    float f88;
    float f8c;
    float f90;
    float f94;
    void sub_61a510();
    void func_61a9e0();
};

void ContactConnector::func_61a9e0()
{
    if (flag4) {
        sub_61a510();
    }
    float v = f7c;
    f80 = 0.0f;
    f88 = 0.0f;
    f84 = v;
    f8c = 0.0f;
    f90 = 0.0f;
    f94 = 0.0f;
}
