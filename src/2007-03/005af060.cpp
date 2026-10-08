// roc 2007-03 005af060  unit: seg_005a0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af060
//
// 005af060  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005af063  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005af060 {
    char pad0[16];
    int m_x;
    int f();
};
int S_func_005af060::f()
{
    return m_x;
}
