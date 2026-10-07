// roc 2008-06 005a0150  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0150
//
// 005a0150  c6411400             mov byte ptr [ecx + 0x14], 0
// 005a0154  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a0150 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_005a0150::f()
{
    m_x = (char)0;
}
