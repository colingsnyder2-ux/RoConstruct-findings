// roc 2007-08 00776a10  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776a10
//
// 00776a10  6850cc7700           push 0x77cc50
// 00776a15  e809a3ebff           call 0x630d23
// 00776a1a  59                   pop ecx
// 00776a1b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776a10;
extern void G1_func_00776a10(void*);
void func_00776a10()
{
    G1_func_00776a10(&G2_func_00776a10);
}
