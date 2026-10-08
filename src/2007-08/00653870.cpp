// roc 2007-08 00653870  unit: G3D::Win32Window  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653870
//
// 00653870  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00653873  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00653870 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_00653870::f()
{
    return m_x;
}
