// roc 2007-03 0057ab30  unit: seg_00570000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ab30
//
// 0057ab30  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0057ab33  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0057ab30 {
    char pad0[108];
    int m_x;
    int f();
};
int S_func_0057ab30::f()
{
    return m_x;
}
