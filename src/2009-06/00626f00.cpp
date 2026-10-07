// roc 2009-06 00626f00  unit: RBX::ToolMouseCommand  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00626f00
//
// 00626f00  c6411400             mov byte ptr [ecx + 0x14], 0
// 00626f04  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00626f00 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_00626f00::f()
{
    m_x = (char)0;
}
