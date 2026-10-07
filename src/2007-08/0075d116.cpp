// roc 2007-08 0075d116  unit: seg_00750000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0075d116
//
// 0075d116  b9b0828c00           mov ecx, 0x8c82b0
// 0075d11b  e94077ecff           jmp 0x624860
// auto-matched from its assembly shape

struct T_func_0075d116 { void m(); };
extern T_func_0075d116 G1_func_0075d116;
void func_0075d116()
{
    G1_func_0075d116.m();
}
