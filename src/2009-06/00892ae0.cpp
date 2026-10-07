// roc 2009-06 00892ae0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892ae0
//
// 00892ae0  6810d48900           push 0x89d410
// 00892ae5  e81170e8ff           call 0x719afb
// 00892aea  59                   pop ecx
// 00892aeb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892ae0;
extern void G1_func_00892ae0(void*);
void func_00892ae0()
{
    G1_func_00892ae0(&G2_func_00892ae0);
}
