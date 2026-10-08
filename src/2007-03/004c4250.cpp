// roc 2007-03 004c4250  unit: seg_004c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4250
//
// 004c4250  8a81dd010000         mov al, byte ptr [ecx + 0x1dd]
// 004c4256  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c4250 {
    char pad0[477];
    char m_x;
    char f();
};
char S_func_004c4250::f()
{
    return m_x;
}
