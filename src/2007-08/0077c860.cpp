// roc 2007-08 0077c860  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c860
//
// 0077c860  b9f47f8c00           mov ecx, 0x8c7ff4
// 0077c865  e9f611e9ff           jmp 0x60da60
// auto-matched from its assembly shape

struct T_func_0077c860 { void m(); };
extern T_func_0077c860 G1_func_0077c860;
void func_0077c860()
{
    G1_func_0077c860.m();
}
