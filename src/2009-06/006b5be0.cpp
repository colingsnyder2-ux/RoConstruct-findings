// roc 2009-06 006b5be0  unit: RBX::ToolMouseCommand  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5be0
//
// 006b5be0  c6411401             mov byte ptr [ecx + 0x14], 1
// 006b5be4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b5be0 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_006b5be0::f()
{
    m_x = (char)1;
}
