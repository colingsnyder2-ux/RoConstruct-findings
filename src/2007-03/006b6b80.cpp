// roc 2007-03 006b6b80  unit: seg_006b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b6b80
//
// 006b6b80  8b811c020000         mov eax, dword ptr [ecx + 0x21c]
// 006b6b86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b6b80 {
    char pad0[540];
    int m_x;
    int f();
};
int S_func_006b6b80::f()
{
    return m_x;
}
