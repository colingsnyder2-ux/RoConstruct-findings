// roc 2008-06 004515f0  unit: VCRobloxDoc::?$VerbBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004515f0
//
// 004515f0  8b4148               mov eax, dword ptr [ecx + 0x48]
// 004515f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004515f0 {
    char pad0[72];
    int m_x;
    int f();
};
int S_func_004515f0::f()
{
    return m_x;
}
