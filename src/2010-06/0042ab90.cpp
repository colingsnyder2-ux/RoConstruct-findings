// roc 2010-06 0042ab90  unit: CSelectionPropGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042ab90
//
// 0042ab90  8b8170020000         mov eax, dword ptr [ecx + 0x270]
// 0042ab96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042ab90 {
    char pad0[624];
    int m_x;
    int f();
};
int S_func_0042ab90::f()
{
    return m_x;
}
