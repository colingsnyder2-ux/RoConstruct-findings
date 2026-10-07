// roc 2009-06 0044fd40  unit: VCRobloxDoc::?$VerbBinder  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044fd40
//
// 0044fd40  8b4148               mov eax, dword ptr [ecx + 0x48]
// 0044fd43  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0044fd40 {
    char pad0[72];
    int m_x;
    int f();
};
int S_func_0044fd40::f()
{
    return m_x;
}
