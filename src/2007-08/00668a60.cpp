// roc 2007-08 00668a60  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00668a60
//
// 00668a60  8b8164040000         mov eax, dword ptr [ecx + 0x464]
// 00668a66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00668a60 {
    char pad0[1124];
    int m_x;
    int f();
};
int S_func_00668a60::f()
{
    return m_x;
}
