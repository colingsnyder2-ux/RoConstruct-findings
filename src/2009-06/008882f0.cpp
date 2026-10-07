// roc 2009-06 008882f0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008882f0
//
// 008882f0  68205f8900           push 0x895f20
// 008882f5  e80118e9ff           call 0x719afb
// 008882fa  59                   pop ecx
// 008882fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008882f0;
extern void G1_func_008882f0(void*);
void func_008882f0()
{
    G1_func_008882f0(&G2_func_008882f0);
}
