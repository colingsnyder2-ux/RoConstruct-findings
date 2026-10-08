// roc 2007-03 006208b0  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006208b0
//
// 006208b0  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 006208b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006208b0 {
    char pad0[304];
    int m_x;
    int f();
};
int S_func_006208b0::f()
{
    return m_x;
}
