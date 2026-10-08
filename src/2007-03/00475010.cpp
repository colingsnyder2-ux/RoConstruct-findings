// roc 2007-03 00475010  unit: seg_00470000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475010
//
// 00475010  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 00475013  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00475010 {
    char pad0[124];
    int m_x;
    int f();
};
int S_func_00475010::f()
{
    return m_x;
}
