// roc 2007-03 0071e820  unit: seg_00710000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071e820
//
// 0071e820  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 0071e826  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071e820 {
    char pad0[440];
    int m_x;
    int f();
};
int S_func_0071e820::f()
{
    return m_x;
}
