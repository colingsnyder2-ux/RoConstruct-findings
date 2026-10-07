// roc 2010-06 0083e8e0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083e8e0
//
// 0083e8e0  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 0083e8e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0083e8e0 {
    char pad0[400];
    int m_x;
    int f();
};
int S_func_0083e8e0::f()
{
    return m_x;
}
