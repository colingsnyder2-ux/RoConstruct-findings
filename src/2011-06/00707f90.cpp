// roc 2011-06 00707f90  unit: RBX::Handles  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00707f90
//
// 00707f90  8b8198010000         mov eax, dword ptr [ecx + 0x198]
// 00707f96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00707f90 {
    char pad0[408];
    int m_x;
    int f();
};
int S_func_00707f90::f()
{
    return m_x;
}
