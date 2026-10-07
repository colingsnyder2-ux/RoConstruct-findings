// roc 2011-06 00a3fc80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fc80
//
// 00a3fc80  b9848ad100           mov ecx, 0xd18a84
// 00a3fc85  e9b8ccf8ff           jmp 0x9cc942
// auto-matched from its assembly shape

struct T_func_00a3fc80 { void m(); };
extern T_func_00a3fc80 G1_func_00a3fc80;
void func_00a3fc80()
{
    G1_func_00a3fc80.m();
}
