// roc 2007-08 0076d830  unit: seg_00760000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d830
//
// 0076d830  68907f7700           push 0x777f90
// 0076d835  e8e934ecff           call 0x630d23
// 0076d83a  59                   pop ecx
// 0076d83b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_0076d830;
extern void G1_func_0076d830(void*);
void func_0076d830()
{
    G1_func_0076d830(&G2_func_0076d830);
}
