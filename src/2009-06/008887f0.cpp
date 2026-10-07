// roc 2009-06 008887f0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008887f0
//
// 008887f0  6850638900           push 0x896350
// 008887f5  e80113e9ff           call 0x719afb
// 008887fa  59                   pop ecx
// 008887fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008887f0;
extern void G1_func_008887f0(void*);
void func_008887f0()
{
    G1_func_008887f0(&G2_func_008887f0);
}
