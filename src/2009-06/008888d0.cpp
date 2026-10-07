// roc 2009-06 008888d0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008888d0
//
// 008888d0  6820648900           push 0x896420
// 008888d5  e82112e9ff           call 0x719afb
// 008888da  59                   pop ecx
// 008888db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008888d0;
extern void G1_func_008888d0(void*);
void func_008888d0()
{
    G1_func_008888d0(&G2_func_008888d0);
}
