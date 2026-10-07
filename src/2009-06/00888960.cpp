// roc 2009-06 00888960  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888960
//
// 00888960  68b0648900           push 0x8964b0
// 00888965  e89111e9ff           call 0x719afb
// 0088896a  59                   pop ecx
// 0088896b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888960;
extern void G1_func_00888960(void*);
void func_00888960()
{
    G1_func_00888960(&G2_func_00888960);
}
