// roc 2007-03 004420d0  unit: seg_00440000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004420d0
//
// 004420d0  8b4104               mov eax, dword ptr [ecx + 4]
// 004420d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004420d0 {
    char pad0[4];
    int m_x;
    int f();
};
int S_func_004420d0::f()
{
    return m_x;
}
