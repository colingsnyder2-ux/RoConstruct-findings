// roc 2007-08 00697d00  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697d00
//
// 00697d00  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00697d06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00697d00 {
    char pad0[240];
    int m_x;
    int f();
};
int S_func_00697d00::f()
{
    return m_x;
}
