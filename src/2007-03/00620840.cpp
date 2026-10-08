// roc 2007-03 00620840  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620840
//
// 00620840  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 00620846  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00620840 {
    char pad0[360];
    int m_x;
    int f();
};
int S_func_00620840::f()
{
    return m_x;
}
