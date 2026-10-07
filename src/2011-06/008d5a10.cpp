// roc 2011-06 008d5a10  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5a10
//
// 008d5a10  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 008d5a16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008d5a10 {
    char pad0[260];
    int m_x;
    int f();
};
int S_func_008d5a10::f()
{
    return m_x;
}
