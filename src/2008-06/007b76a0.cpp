// from server: 100% by auto
// roc 2008-06 007b76a0  unit: RBX::RenderNew::Material::Level  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b76a0
//
// 007b76a0  8d4110               lea eax, [ecx + 0x10]
// 007b76a3  c3                   ret 

struct S_func_007b76a0 {
    char pad0[16];
    int m_x;
    int* f();
};
int* S_func_007b76a0::f()
{
    return &m_x;
}
