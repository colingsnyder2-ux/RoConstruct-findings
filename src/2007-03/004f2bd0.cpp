// roc 2007-03 004f2bd0  unit: seg_004f0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2bd0
//
// 004f2bd0  8a4114               mov al, byte ptr [ecx + 0x14]
// 004f2bd3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004f2bd0 {
    char pad0[20];
    char m_x;
    char f();
};
char S_func_004f2bd0::f()
{
    return m_x;
}
