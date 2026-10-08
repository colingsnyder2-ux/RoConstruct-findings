// roc 2007-03 006be000  unit: seg_006b0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006be000
//
// 006be000  8b4164               mov eax, dword ptr [ecx + 0x64]
// 006be003  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006be000 {
    char pad0[100];
    int m_x;
    int f();
};
int S_func_006be000::f()
{
    return m_x;
}
