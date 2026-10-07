// roc 2010-06 009db820  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db820
//
// 009db820  b9400dc000           mov ecx, 0xc00d40
// 009db825  e956baa6ff           jmp 0x447280
// auto-matched from its assembly shape

struct T_func_009db820 { void m(); };
extern T_func_009db820 G1_func_009db820;
void func_009db820()
{
    G1_func_009db820.m();
}
