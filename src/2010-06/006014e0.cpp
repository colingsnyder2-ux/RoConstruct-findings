// roc 2010-06 006014e0  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006014e0
//
// 006014e0  c6411400             mov byte ptr [ecx + 0x14], 0
// 006014e4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006014e0 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_006014e0::f()
{
    m_x = (char)0;
}
