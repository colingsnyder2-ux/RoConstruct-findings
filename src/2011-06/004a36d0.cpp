// roc 2011-06 004a36d0  unit: RBX::DS::CVideoStreamFilter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a36d0
//
// 004a36d0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 004a36d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a36d0 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_004a36d0::f()
{
    return m_x;
}
