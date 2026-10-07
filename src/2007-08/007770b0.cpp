// roc 2007-08 007770b0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007770b0
//
// 007770b0  6820ce7700           push 0x77ce20
// 007770b5  e8699cebff           call 0x630d23
// 007770ba  59                   pop ecx
// 007770bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007770b0;
extern void G1_func_007770b0(void*);
void func_007770b0()
{
    G1_func_007770b0(&G2_func_007770b0);
}
