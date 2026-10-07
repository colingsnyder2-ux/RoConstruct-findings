// roc 2007-08 0076d7a0  unit: seg_00760000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d7a0
//
// 0076d7a0  68e07e7700           push 0x777ee0
// 0076d7a5  e87935ecff           call 0x630d23
// 0076d7aa  59                   pop ecx
// 0076d7ab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076d7a0;
extern void G1_func_0076d7a0(void*);
void func_0076d7a0()
{
    G1_func_0076d7a0(&G2_func_0076d7a0);
}
