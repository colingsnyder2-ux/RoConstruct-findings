// roc 2011-06 00a3b800  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b800
//
// 00a3b800  b950eccc00           mov ecx, 0xccec50
// 00a3b805  e9060da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b800 { void m(); };
extern T_func_00a3b800 G1_func_00a3b800;
void func_00a3b800()
{
    G1_func_00a3b800.m();
}
