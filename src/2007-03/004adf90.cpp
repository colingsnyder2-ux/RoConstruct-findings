// roc 2007-03 004adf90  unit: seg_004a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004adf90
//
// 004adf90  8b811c080000         mov eax, dword ptr [ecx + 0x81c]
// 004adf96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004adf90 {
    char pad0[2076];
    int m_x;
    int f();
};
int S_func_004adf90::f()
{
    return m_x;
}
