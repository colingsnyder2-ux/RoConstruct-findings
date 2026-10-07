// roc 2007-08 00776a30  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a30
//
// 00776a30  68b0cc7700           push 0x77ccb0
// 00776a35  e8e9a2ebff           call 0x630d23
// 00776a3a  59                   pop ecx
// 00776a3b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776a30;
extern void G1_func_00776a30(void*);
void func_00776a30()
{
    G1_func_00776a30(&G2_func_00776a30);
}
