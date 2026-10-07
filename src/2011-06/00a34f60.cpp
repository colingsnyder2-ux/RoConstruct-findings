// roc 2011-06 00a34f60  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f60
//
// 00a34f60  b928bfcb00           mov ecx, 0xcbbf28
// 00a34f65  e95681a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a34f60 { void m(); };
extern T_func_00a34f60 G1_func_00a34f60;
void func_00a34f60()
{
    G1_func_00a34f60.m();
}
