// roc 2011-06 00a39800  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39800
//
// 00a39800  b980b0cc00           mov ecx, 0xccb080
// 00a39805  e9b638a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39800 { void m(); };
extern T_func_00a39800 G1_func_00a39800;
void func_00a39800()
{
    G1_func_00a39800.m();
}
