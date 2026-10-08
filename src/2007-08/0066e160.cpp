// roc 2007-08 0066e160  unit: CXTPControls  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e160
//
// 0066e160  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0066e166  83c028               add eax, 0x28
// 0066e169  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066e160 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_0066e160::f()
{
    return m_x + 0x28;
}
