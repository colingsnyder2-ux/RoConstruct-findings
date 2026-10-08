// roc 2007-03 0055db80  unit: seg_00550000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055db80
//
// 0055db80  8a4170               mov al, byte ptr [ecx + 0x70]
// 0055db83  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0055db80 {
    char pad0[112];
    char m_x;
    char f();
};
char S_func_0055db80::f()
{
    return m_x;
}
