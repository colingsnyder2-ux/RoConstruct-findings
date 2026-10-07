// roc 2009-06 00886ee0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886ee0
//
// 00886ee0  68c04f8900           push 0x894fc0
// 00886ee5  e8112ce9ff           call 0x719afb
// 00886eea  59                   pop ecx
// 00886eeb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00886ee0;
extern void G1_func_00886ee0(void*);
void func_00886ee0()
{
    G1_func_00886ee0(&G2_func_00886ee0);
}
