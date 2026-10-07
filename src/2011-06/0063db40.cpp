// roc 2011-06 0063db40  unit: RBX::ArrowToolBase  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063db40
//
// 0063db40  c6411800             mov byte ptr [ecx + 0x18], 0
// 0063db44  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063db40 {
    char pad0[24];
    char m_x;
    void f();
};
void S_func_0063db40::f()
{
    m_x = (char)0;
}
