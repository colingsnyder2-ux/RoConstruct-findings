// roc 2008-06 006df800  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df800
//
// 006df800  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 006df806  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006df800 {
    char pad0[1128];
    int m_x;
    int f();
};
int S_func_006df800::f()
{
    return m_x;
}
