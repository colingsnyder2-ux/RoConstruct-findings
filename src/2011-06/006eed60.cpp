// roc 2011-06 006eed60  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eed60
//
// 006eed60  8a8110010000         mov al, byte ptr [ecx + 0x110]
// 006eed66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006eed60 {
    char pad0[272];
    char m_x;
    char f();
};
char S_func_006eed60::f()
{
    return m_x;
}
