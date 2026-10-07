// roc 2010-06 0045a660  unit: VCRobloxDoc::?$VerbBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0045a660
//
// 0045a660  8b4148               mov eax, dword ptr [ecx + 0x48]
// 0045a663  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045a660 {
    char pad0[72];
    int m_x;
    int f();
};
int S_func_0045a660::f()
{
    return m_x;
}
