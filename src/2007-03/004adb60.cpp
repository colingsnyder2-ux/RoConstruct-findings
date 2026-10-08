// roc 2007-03 004adb60  unit: seg_004a0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004adb60
//
// 004adb60  668b410a             mov ax, word ptr [ecx + 0xa]
// 004adb64  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004adb60 {
    char pad0[10];
    short m_x;
    short f();
};
short S_func_004adb60::f()
{
    return m_x;
}
