// roc 2007-08 00668a50  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00668a50
//
// 00668a50  8b8164010000         mov eax, dword ptr [ecx + 0x164]
// 00668a56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00668a50 {
    char pad0[356];
    int m_x;
    int f();
};
int S_func_00668a50::f()
{
    return m_x;
}
