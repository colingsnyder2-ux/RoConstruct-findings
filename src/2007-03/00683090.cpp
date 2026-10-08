// roc 2007-03 00683090  unit: seg_00680000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00683090
//
// 00683090  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00683096  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00683090 {
    char pad0[236];
    int m_x;
    int f();
};
int S_func_00683090::f()
{
    return m_x;
}
