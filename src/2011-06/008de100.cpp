// roc 2011-06 008de100  unit: RBX::ViewRbxGfx  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de100
//
// 008de100  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008de103  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008de100 {
    char pad0[36];
    int m_x;
    int f();
};
int S_func_008de100::f()
{
    return m_x;
}
