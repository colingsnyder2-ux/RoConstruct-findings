// roc 2011-06 00a3a650  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a650
//
// 00a3a650  b988cbcc00           mov ecx, 0xcccb88
// 00a3a655  e9f65fc4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3a650 { void m(); };
extern T_func_00a3a650 G1_func_00a3a650;
void func_00a3a650()
{
    G1_func_00a3a650.m();
}
