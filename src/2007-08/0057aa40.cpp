// roc 2007-08 0057aa40  unit: RBX::ArrowTool  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aa40
//
// 0057aa40  c6411400             mov byte ptr [ecx + 0x14], 0
// 0057aa44  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0057aa40 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_0057aa40::f()
{
    m_x = (char)0;
}
