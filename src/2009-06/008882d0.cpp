// roc 2009-06 008882d0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008882d0
//
// 008882d0  68c05e8900           push 0x895ec0
// 008882d5  e82118e9ff           call 0x719afb
// 008882da  59                   pop ecx
// 008882db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008882d0;
extern void G1_func_008882d0(void*);
void func_008882d0()
{
    G1_func_008882d0(&G2_func_008882d0);
}
