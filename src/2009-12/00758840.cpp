// roc 2009-12 00758840  unit: RBX::ImageLabel  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00758840
//
// 00758840  8a4130               mov al, byte ptr [ecx + 0x30]
// 00758843  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006df430@ns_ROCX000001@@QAEDXZ)

namespace ns_ROCX000001 {
struct S_func_006df430 {
    char pad0[48];
    char m_x;
    char f();
};
char S_func_006df430::f()
{
    return m_x;
}
}
