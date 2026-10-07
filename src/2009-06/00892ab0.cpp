// roc 2009-06 00892ab0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892ab0
//
// 00892ab0  6880d38900           push 0x89d380
// 00892ab5  e84170e8ff           call 0x719afb
// 00892aba  59                   pop ecx
// 00892abb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892ab0;
extern void G1_func_00892ab0(void*);
void func_00892ab0()
{
    G1_func_00892ab0(&G2_func_00892ab0);
}
