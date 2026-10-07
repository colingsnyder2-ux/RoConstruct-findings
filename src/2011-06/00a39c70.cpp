// roc 2011-06 00a39c70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39c70
//
// 00a39c70  b9d0becc00           mov ecx, 0xccbed0
// 00a39c75  e99628a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39c70 { void m(); };
extern T_func_00a39c70 G1_func_00a39c70;
void func_00a39c70()
{
    G1_func_00a39c70.m();
}
