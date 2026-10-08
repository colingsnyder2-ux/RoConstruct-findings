// roc 2007-03 0065f2f0  unit: seg_00650000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065f2f0
//
// 0065f2f0  c7817801000001000000 mov dword ptr [ecx + 0x178], 1
// 0065f2fa  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065f2f0 {
    char pad0[376];
    int m_x;
    void f();
};
void S_func_0065f2f0::f()
{
    m_x = (int)1;
}
