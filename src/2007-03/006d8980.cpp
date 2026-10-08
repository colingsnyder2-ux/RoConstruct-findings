// roc 2007-03 006d8980  unit: seg_006d0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d8980
//
// 006d8980  8b4144               mov eax, dword ptr [ecx + 0x44]
// 006d8983  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d8980 {
    char pad0[68];
    int m_x;
    int f();
};
int S_func_006d8980::f()
{
    return m_x;
}
