// roc 2007-08 0076d860  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d860
//
// 0076d860  68b07f7700           push 0x777fb0
// 0076d865  e8b934ecff           call 0x630d23
// 0076d86a  59                   pop ecx
// 0076d86b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076d860;
extern void G1_func_0076d860(void*);
void func_0076d860()
{
    G1_func_0076d860(&G2_func_0076d860);
}
