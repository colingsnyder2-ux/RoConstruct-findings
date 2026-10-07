// roc 2007-08 00776a70  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a70
//
// 00776a70  68d0cc7700           push 0x77ccd0
// 00776a75  e8a9a2ebff           call 0x630d23
// 00776a7a  59                   pop ecx
// 00776a7b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776a70;
extern void G1_func_00776a70(void*);
void func_00776a70()
{
    G1_func_00776a70(&G2_func_00776a70);
}
