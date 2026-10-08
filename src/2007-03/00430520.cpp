// roc 2007-03 00430520  unit: seg_00430000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00430520
//
// 00430520  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 00430526  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00430520 {
    char pad0[468];
    int m_x;
    int f();
};
int S_func_00430520::f()
{
    return m_x;
}
