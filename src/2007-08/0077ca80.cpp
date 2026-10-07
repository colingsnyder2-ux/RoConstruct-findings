// roc 2007-08 0077ca80  unit: seg_00770000  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ca80
//
// 0077ca80  e9cb04ecff           jmp 0x63cf50
// auto-matched from its assembly shape

extern void G1_func_0077ca80();
void func_0077ca80()
{
    G1_func_0077ca80();
}
