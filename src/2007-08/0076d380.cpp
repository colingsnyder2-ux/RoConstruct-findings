// roc 2007-08 0076d380  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d380
//
// 0076d380  68c07d7700           push 0x777dc0
// 0076d385  e89939ecff           call 0x630d23
// 0076d38a  59                   pop ecx
// 0076d38b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076d380;
extern void G1_func_0076d380(void*);
void func_0076d380()
{
    G1_func_0076d380(&G2_func_0076d380);
}
