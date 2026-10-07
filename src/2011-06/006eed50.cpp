// roc 2011-06 006eed50  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eed50
//
// 006eed50  8a8111010000         mov al, byte ptr [ecx + 0x111]
// 006eed56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006eed50 {
    char pad0[273];
    char m_x;
    char f();
};
char S_func_006eed50::f()
{
    return m_x;
}
