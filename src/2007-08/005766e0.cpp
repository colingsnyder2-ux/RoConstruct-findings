// roc 2007-08 005766e0  unit: RBX::PartInstance  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005766e0
//
// 005766e0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 005766e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005766e0 {
    char pad0[472];
    int m_x;
    int f();
};
int S_func_005766e0::f()
{
    return m_x;
}
