// roc 2011-06 00689260  unit: RBX::Keyframe  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689260
//
// 00689260  8a81dc000000         mov al, byte ptr [ecx + 0xdc]
// 00689266  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00689260 {
    char pad0[220];
    char m_x;
    char f();
};
char S_func_00689260::f()
{
    return m_x;
}
