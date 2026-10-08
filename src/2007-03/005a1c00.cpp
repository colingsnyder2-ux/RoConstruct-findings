// roc 2007-03 005a1c00  unit: seg_005a0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1c00
//
// 005a1c00  e90bfbffff           jmp 0x5a1710
// auto-matched from its assembly shape

extern void G1_func_005a1c00();
void func_005a1c00()
{
    G1_func_005a1c00();
}
