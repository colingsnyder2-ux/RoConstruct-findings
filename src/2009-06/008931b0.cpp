// roc 2009-06 008931b0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008931b0
//
// 008931b0  6880d58900           push 0x89d580
// 008931b5  e84169e8ff           call 0x719afb
// 008931ba  59                   pop ecx
// 008931bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008931b0;
extern void G1_func_008931b0(void*);
void func_008931b0()
{
    G1_func_008931b0(&G2_func_008931b0);
}
