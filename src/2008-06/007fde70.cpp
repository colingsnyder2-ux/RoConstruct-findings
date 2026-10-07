// roc 2008-06 007fde70  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fde70
//
// 007fde70  b980659700           mov ecx, 0x976580
// 007fde75  e946cdc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fde70 { void m(); };
extern T_func_007fde70 G1_func_007fde70;
void func_007fde70()
{
    G1_func_007fde70.m();
}
