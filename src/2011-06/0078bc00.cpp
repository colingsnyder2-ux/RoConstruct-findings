// roc 2011-06 0078bc00  unit: RBX::ArrowToolBase  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078bc00
//
// 0078bc00  c6411801             mov byte ptr [ecx + 0x18], 1
// 0078bc04  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0078bc00 {
    char pad0[24];
    char m_x;
    void f();
};
void S_func_0078bc00::f()
{
    m_x = (char)1;
}
