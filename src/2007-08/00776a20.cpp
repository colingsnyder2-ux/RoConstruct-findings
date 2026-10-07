// roc 2007-08 00776a20  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a20
//
// 00776a20  6890cc7700           push 0x77cc90
// 00776a25  e8f9a2ebff           call 0x630d23
// 00776a2a  59                   pop ecx
// 00776a2b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776a20;
extern void G1_func_00776a20(void*);
void func_00776a20()
{
    G1_func_00776a20(&G2_func_00776a20);
}
