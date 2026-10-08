// roc 2008-06 004db6f0  unit: RBX::ViewNew::ViewRbxGfx  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004db6f0
//
// 004db6f0  8b4108               mov eax, dword ptr [ecx + 8]
// 004db6f3  83c030               add eax, 0x30
// 004db6f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004db6f0 {
    char pad0[8];
    int m_x;
    int f();
};
int S_func_004db6f0::f()
{
    return m_x + 0x30;
}
