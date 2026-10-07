// roc 2009-06 00885dc0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885dc0
//
// 00885dc0  68704f8900           push 0x894f70
// 00885dc5  e8313de9ff           call 0x719afb
// 00885dca  59                   pop ecx
// 00885dcb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00885dc0;
extern void G1_func_00885dc0(void*);
void func_00885dc0()
{
    G1_func_00885dc0(&G2_func_00885dc0);
}
