// roc 2007-08 007700d0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007700d0
//
// 007700d0  6870907700           push 0x779070
// 007700d5  e8490cecff           call 0x630d23
// 007700da  59                   pop ecx
// 007700db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007700d0;
extern void G1_func_007700d0(void*);
void func_007700d0()
{
    G1_func_007700d0(&G2_func_007700d0);
}
