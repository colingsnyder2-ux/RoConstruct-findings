// roc 2007-08 006733b0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006733b0
//
// 006733b0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 006733b6  83c00a               add eax, 0xa
// 006733b9  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006733b0 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_006733b0::f()
{
    return m_x + 0xa;
}
