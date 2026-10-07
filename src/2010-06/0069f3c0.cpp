// roc 2010-06 0069f3c0  unit: RBX::FaceInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f3c0
//
// 0069f3c0  d981c0000000         fld dword ptr [ecx + 0xc0]
// 0069f3c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069f3c0 {
    char pad[192];
    float m_x;
    float f();
};
float S_func_0069f3c0::f()
{
    return m_x;
}
