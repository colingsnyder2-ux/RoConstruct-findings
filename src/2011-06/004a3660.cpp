// roc 2011-06 004a3660  unit: RBX::DS::CVideoStreamFilter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3660
//
// 004a3660  8a81a8000000         mov al, byte ptr [ecx + 0xa8]
// 004a3666  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a3660 {
    char pad0[168];
    char m_x;
    char f();
};
char S_func_004a3660::f()
{
    return m_x;
}
