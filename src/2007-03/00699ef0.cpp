// roc 2007-03 00699ef0  unit: seg_00690000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00699ef0
//
// 00699ef0  8b8140020000         mov eax, dword ptr [ecx + 0x240]
// 00699ef6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00699ef0 {
    char pad0[576];
    int m_x;
    int f();
};
int S_func_00699ef0::f()
{
    return m_x;
}
