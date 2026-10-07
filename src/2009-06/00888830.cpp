// roc 2009-06 00888830  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888830
//
// 00888830  68a0638900           push 0x8963a0
// 00888835  e8c112e9ff           call 0x719afb
// 0088883a  59                   pop ecx
// 0088883b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888830;
extern void G1_func_00888830(void*);
void func_00888830()
{
    G1_func_00888830(&G2_func_00888830);
}
