// roc 2008-06 00741d90  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741d90
//
// 00741d90  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 00741d96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00741d90 {
    char pad0[400];
    int m_x;
    int f();
};
int S_func_00741d90::f()
{
    return m_x;
}
