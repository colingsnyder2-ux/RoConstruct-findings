// roc 2008-06 00615820  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615820
//
// 00615820  c6411401             mov byte ptr [ecx + 0x14], 1
// 00615824  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00615820 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_00615820::f()
{
    m_x = (char)1;
}
