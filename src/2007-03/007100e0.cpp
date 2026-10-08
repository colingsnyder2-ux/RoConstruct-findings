// roc 2007-03 007100e0  unit: seg_00710000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007100e0
//
// 007100e0  8b81fc010000         mov eax, dword ptr [ecx + 0x1fc]
// 007100e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007100e0 {
    char pad0[508];
    int m_x;
    int f();
};
int S_func_007100e0::f()
{
    return m_x;
}
