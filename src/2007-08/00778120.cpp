// roc 2007-08 00778120  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778120
//
// 00778120  b998de8b00           mov ecx, 0x8bde98
// 00778125  e94603caff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00778120 { void m(); };
extern T_func_00778120 G1_func_00778120;
void func_00778120()
{
    G1_func_00778120.m();
}
