// roc 2010-06 0069f3d0  unit: RBX::FaceInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f3d0
//
// 0069f3d0  d981c8000000         fld dword ptr [ecx + 0xc8]
// 0069f3d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069f3d0 {
    char pad[200];
    float m_x;
    float f();
};
float S_func_0069f3d0::f()
{
    return m_x;
}
