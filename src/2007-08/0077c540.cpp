// roc 2007-08 0077c540  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c540
//
// 0077c540  b9d87a8c00           mov ecx, 0x8c7ad8
// 0077c545  e976a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c540 { void m(); };
extern T_func_0077c540 G1_func_0077c540;
void func_0077c540()
{
    G1_func_0077c540.m();
}
