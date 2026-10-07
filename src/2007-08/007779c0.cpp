// roc 2007-08 007779c0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007779c0
//
// 007779c0  b954b98b00           mov ecx, 0x8bb954
// 007779c5  e956ddfaff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_007779c0 { void m(); };
extern T_func_007779c0 G1_func_007779c0;
void func_007779c0()
{
    G1_func_007779c0.m();
}
