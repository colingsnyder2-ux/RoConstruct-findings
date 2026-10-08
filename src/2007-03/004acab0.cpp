// roc 2007-03 004acab0  unit: seg_004a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004acab0
//
// 004acab0  8b81100a0000         mov eax, dword ptr [ecx + 0xa10]
// 004acab6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004acab0 {
    char pad0[2576];
    int m_x;
    int f();
};
int S_func_004acab0::f()
{
    return m_x;
}
