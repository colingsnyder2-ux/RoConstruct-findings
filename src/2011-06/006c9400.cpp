// roc 2011-06 006c9400  unit: RBX::TextLabel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c9400
//
// 006c9400  8a814f020000         mov al, byte ptr [ecx + 0x24f]
// 006c9406  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c9400 {
    char pad0[591];
    char m_x;
    char f();
};
char S_func_006c9400::f()
{
    return m_x;
}
