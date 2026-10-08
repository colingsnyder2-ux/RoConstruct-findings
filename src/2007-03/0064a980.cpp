// roc 2007-03 0064a980  unit: seg_00640000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064a980
//
// 0064a980  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 0064a983  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064a980 {
    char pad0[92];
    int m_x;
    int f();
};
int S_func_0064a980::f()
{
    return m_x;
}
