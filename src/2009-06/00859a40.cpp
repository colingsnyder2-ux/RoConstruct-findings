// roc 2009-06 00859a40  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00859a40
//
// 00859a40  b914daa300           mov ecx, 0xa3da14
// 00859a45  e9069dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00859a40 { void m(); };
extern T_func_00859a40 G1_func_00859a40;
void func_00859a40()
{
    G1_func_00859a40.m();
}
