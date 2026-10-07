// roc 2007-08 0077a380  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a380
//
// 0077a380  b9602a8c00           mov ecx, 0x8c2a60
// 0077a385  e986d2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077a380 { void m(); };
extern T_func_0077a380 G1_func_0077a380;
void func_0077a380()
{
    G1_func_0077a380.m();
}
