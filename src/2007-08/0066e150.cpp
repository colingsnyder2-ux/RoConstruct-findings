// roc 2007-08 0066e150  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e150
//
// 0066e150  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0066e156  83c044               add eax, 0x44
// 0066e159  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066e150 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_0066e150::f()
{
    return m_x + 0x44;
}
