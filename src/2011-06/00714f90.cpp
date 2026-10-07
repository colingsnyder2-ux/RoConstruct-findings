// roc 2011-06 00714f90  unit: RBX::TouchTransmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714f90
//
// 00714f90  8b8164030000         mov eax, dword ptr [ecx + 0x364]
// 00714f96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00714f90 {
    char pad0[868];
    int m_x;
    int f();
};
int S_func_00714f90::f()
{
    return m_x;
}
