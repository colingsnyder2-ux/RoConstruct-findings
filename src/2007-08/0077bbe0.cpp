// roc 2007-08 0077bbe0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bbe0
//
// 0077bbe0  b900658c00           mov ecx, 0x8c6500
// 0077bbe5  e9f641dfff           jmp 0x56fde0
// auto-matched from its assembly shape

struct T_func_0077bbe0 { void m(); };
extern T_func_0077bbe0 G1_func_0077bbe0;
void func_0077bbe0()
{
    G1_func_0077bbe0.m();
}
