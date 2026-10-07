// roc 2011-06 00714f80  unit: RBX::TouchTransmitter  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00714f80
//
// 00714f80  8a815c030000         mov al, byte ptr [ecx + 0x35c]
// 00714f86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00714f80 {
    char pad0[860];
    char m_x;
    char f();
};
char S_func_00714f80::f()
{
    return m_x;
}
