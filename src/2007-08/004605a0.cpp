// roc 2007-08 004605a0  unit: CScriptEditor  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004605a0
//
// 004605a0  8b01                 mov eax, dword ptr [ecx]
// 004605a2  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004605a0 {
    int m_x;
    int f();
};
int S_func_004605a0::f()
{
    return m_x;
}
