// roc 2009-06 008875f0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008875f0
//
// 008875f0  6880558900           push 0x895580
// 008875f5  e80125e9ff           call 0x719afb
// 008875fa  59                   pop ecx
// 008875fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008875f0;
extern void G1_func_008875f0(void*);
void func_008875f0()
{
    G1_func_008875f0(&G2_func_008875f0);
}
