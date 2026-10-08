// roc 2007-03 0045dea0  unit: seg_00450000  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045dea0
//
// 0045dea0  8b01                 mov eax, dword ptr [ecx]
// 0045dea2  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045dea0 {
    int m_x;
    int f();
};
int S_func_0045dea0::f()
{
    return m_x;
}
