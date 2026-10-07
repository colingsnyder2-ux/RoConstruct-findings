// roc 2010-06 0085ed90  unit: RBX::ViewRbxGfx  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085ed90
//
// 0085ed90  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0085ed93  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0085ed90 {
    char pad0[24];
    int m_x;
    int f();
};
int S_func_0085ed90::f()
{
    return m_x;
}
