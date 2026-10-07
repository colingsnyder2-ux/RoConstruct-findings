// roc 2011-06 004a3680  unit: RBX::DS::CVideoStreamFilter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3680
//
// 004a3680  8a819c000000         mov al, byte ptr [ecx + 0x9c]
// 004a3686  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a3680 {
    char pad0[156];
    char m_x;
    char f();
};
char S_func_004a3680::f()
{
    return m_x;
}
