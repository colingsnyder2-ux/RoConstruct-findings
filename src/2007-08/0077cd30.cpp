// roc 2007-08 0077cd30  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd30
//
// 0077cd30  b9b8978c00           mov ecx, 0x8c97b8
// 0077cd35  e9065ff9ff           jmp 0x712c40
// auto-matched from its assembly shape

struct T_func_0077cd30 { void m(); };
extern T_func_0077cd30 G1_func_0077cd30;
void func_0077cd30()
{
    G1_func_0077cd30.m();
}
