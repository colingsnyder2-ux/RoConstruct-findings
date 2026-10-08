// roc 2008-06 006ea240  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea240
//
// 006ea240  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 006ea246  83c00a               add eax, 0xa
// 006ea249  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ea240 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_006ea240::f()
{
    return m_x + 0xa;
}
