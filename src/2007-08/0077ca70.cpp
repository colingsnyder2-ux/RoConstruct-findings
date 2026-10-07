// roc 2007-08 0077ca70  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ca70
//
// 0077ca70  b9c4868c00           mov ecx, 0x8c86c4
// 0077ca75  e986b0f1ff           jmp 0x697b00
// auto-matched from its assembly shape

struct T_func_0077ca70 { void m(); };
extern T_func_0077ca70 G1_func_0077ca70;
void func_0077ca70()
{
    G1_func_0077ca70.m();
}
