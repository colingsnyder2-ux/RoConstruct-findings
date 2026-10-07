// roc 2011-06 004a3700  unit: RBX::DS::CVideoStreamFilter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3700
//
// 004a3700  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 004a3706  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a3700 {
    char pad0[368];
    int m_x;
    int f();
};
int S_func_004a3700::f()
{
    return m_x;
}
