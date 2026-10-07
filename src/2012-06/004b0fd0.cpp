// roc 2012-06 004b0fd0  unit: CWebToolbox  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b0fd0
//
// 004b0fd0  8b81cc0c0000         mov eax, dword ptr [ecx + 0xccc]
// 004b0fd6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b0fd0 {
    char pad0[3276];
    int m_x;
    int f();
};
int S_func_004b0fd0::f()
{
    return m_x;
}
