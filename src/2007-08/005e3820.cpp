// roc 2007-08 005e3820  unit: RBX::ArrowTool  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3820
//
// 005e3820  c6411401             mov byte ptr [ecx + 0x14], 1
// 005e3824  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005e3820 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_005e3820::f()
{
    m_x = (char)1;
}
