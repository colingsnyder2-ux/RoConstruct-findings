// roc 2007-08 0077c980  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c980
//
// 0077c980  b95c808c00           mov ecx, 0x8c805c
// 0077c985  e986acc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c980 { void m(); };
extern T_func_0077c980 G1_func_0077c980;
void func_0077c980()
{
    G1_func_0077c980.m();
}
