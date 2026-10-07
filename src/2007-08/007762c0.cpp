// roc 2007-08 007762c0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007762c0
//
// 007762c0  6880ca7700           push 0x77ca80
// 007762c5  e859aaebff           call 0x630d23
// 007762ca  59                   pop ecx
// 007762cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007762c0;
extern void G1_func_007762c0(void*);
void func_007762c0()
{
    G1_func_007762c0(&G2_func_007762c0);
}
