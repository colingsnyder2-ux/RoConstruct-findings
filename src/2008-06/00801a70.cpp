// roc 2008-06 00801a70  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801a70
//
// 00801a70  b96cf69700           mov ecx, 0x97f66c
// 00801a75  e9b6c7d0ff           jmp 0x50e230
// auto-matched from its assembly shape

struct T_func_00801a70 { void m(); };
extern T_func_00801a70 G1_func_00801a70;
void func_00801a70()
{
    G1_func_00801a70.m();
}
