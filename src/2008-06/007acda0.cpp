// roc 2008-06 007acda0  unit: RBX::RenderNew::Material  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007acda0
//
// 007acda0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 007acda3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007acda0 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_007acda0::f()
{
    return m_x;
}
