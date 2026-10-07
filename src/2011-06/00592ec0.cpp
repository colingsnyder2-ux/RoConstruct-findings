// roc 2011-06 00592ec0  unit: RBX::Object  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00592ec0
//
// 00592ec0  8a416c               mov al, byte ptr [ecx + 0x6c]
// 00592ec3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00592ec0 {
    char pad0[108];
    char m_x;
    char f();
};
char S_func_00592ec0::f()
{
    return m_x;
}
