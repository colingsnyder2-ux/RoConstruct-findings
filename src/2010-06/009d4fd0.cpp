// roc 2010-06 009d4fd0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4fd0
//
// 009d4fd0  6860f4c100           push 0xc1f460
// 009d4fd5  e8b69dc4ff           call 0x61ed90
// 009d4fda  59                   pop ecx
// 009d4fdb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d4fd0;
extern void G1_func_009d4fd0(void*);
void func_009d4fd0()
{
    G1_func_009d4fd0(&G2_func_009d4fd0);
}
