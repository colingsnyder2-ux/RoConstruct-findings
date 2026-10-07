// roc 2008-06 00801080  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801080
//
// 00801080  b918d59700           mov ecx, 0x97d518
// 00801085  e9b62ccaff           jmp 0x4a3d40
// auto-matched from its assembly shape

struct T_func_00801080 { void m(); };
extern T_func_00801080 G1_func_00801080;
void func_00801080()
{
    G1_func_00801080.m();
}
