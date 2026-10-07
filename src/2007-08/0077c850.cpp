// roc 2007-08 0077c850  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c850
//
// 0077c850  b9487f8c00           mov ecx, 0x8c7f48
// 0077c855  e9e6deddff           jmp 0x55a740
// auto-matched from its assembly shape

struct T_func_0077c850 { void m(); };
extern T_func_0077c850 G1_func_0077c850;
void func_0077c850()
{
    G1_func_0077c850.m();
}
