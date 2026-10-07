// roc 2007-08 005b4d10  unit: RBX::Geometry  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4d10
//
// 005b4d10  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005b4d13  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b4d10 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_005b4d10::f()
{
    return m_x;
}
