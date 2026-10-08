// roc 2007-08 00776380  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776380
//
// 00776380  6890cb7700           push 0x77cb90
// 00776385  e899a9ebff           call 0x630d23
// 0077638a  59                   pop ecx
// 0077638b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00776380;
extern void G1_func_00776380(void*);
void func_00776380()
{
    G1_func_00776380(&G2_func_00776380);
}
