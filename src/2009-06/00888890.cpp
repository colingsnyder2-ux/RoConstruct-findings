// roc 2009-06 00888890  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888890
//
// 00888890  68e0638900           push 0x8963e0
// 00888895  e86112e9ff           call 0x719afb
// 0088889a  59                   pop ecx
// 0088889b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888890;
extern void G1_func_00888890(void*);
void func_00888890()
{
    G1_func_00888890(&G2_func_00888890);
}
