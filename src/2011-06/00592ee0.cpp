// roc 2011-06 00592ee0  unit: RBX::Object  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00592ee0
//
// 00592ee0  8a416e               mov al, byte ptr [ecx + 0x6e]
// 00592ee3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00592ee0 {
    char pad0[110];
    char m_x;
    char f();
};
char S_func_00592ee0::f()
{
    return m_x;
}
