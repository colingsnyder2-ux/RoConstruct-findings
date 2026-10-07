// roc 2007-08 007774f0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007774f0
//
// 007774f0  b9b8b08b00           mov ecx, 0x8bb0b8
// 007774f5  e9f616caff           jmp 0x418bf0
// auto-matched from its assembly shape

struct T_func_007774f0 { void m(); };
extern T_func_007774f0 G1_func_007774f0;
void func_007774f0()
{
    G1_func_007774f0.m();
}
