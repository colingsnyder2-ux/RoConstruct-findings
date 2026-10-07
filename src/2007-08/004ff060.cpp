// roc 2007-08 004ff060  unit: G3D::Shader  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff060
//
// 004ff060  8a4114               mov al, byte ptr [ecx + 0x14]
// 004ff063  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004ff060 {
    char pad0[20];
    char m_x;
    char f();
};
char S_func_004ff060::f()
{
    return m_x;
}
