// roc 2011-06 00a39880  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39880
//
// 00a39880  b998afcc00           mov ecx, 0xccaf98
// 00a39885  e93638a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a39880 { void m(); };
extern T_func_00a39880 G1_func_00a39880;
void func_00a39880()
{
    G1_func_00a39880.m();
}
