// roc 2011-06 004a36c0  unit: RBX::DS::CVideoStreamFilter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a36c0
//
// 004a36c0  8a81cc000000         mov al, byte ptr [ecx + 0xcc]
// 004a36c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a36c0 {
    char pad0[204];
    char m_x;
    char f();
};
char S_func_004a36c0::f()
{
    return m_x;
}
