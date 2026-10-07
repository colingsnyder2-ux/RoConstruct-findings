// roc 2008-06 0060d580  unit: RBX::BlockBlockContact  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d580
//
// 0060d580  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0060d583  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0060d580 {
    char pad0[56];
    int m_x;
    int f();
};
int S_func_0060d580::f()
{
    return m_x;
}
