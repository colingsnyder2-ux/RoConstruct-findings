// roc 2007-08 007774c0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007774c0
//
// 007774c0  b9a0b18b00           mov ecx, 0x8bb1a0
// 007774c5  e94601caff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007774c0 { void m(); };
extern T_func_007774c0 G1_func_007774c0;
void func_007774c0()
{
    G1_func_007774c0.m();
}
