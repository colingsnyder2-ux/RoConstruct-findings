// roc 2009-06 00888900  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888900
//
// 00888900  6850648900           push 0x896450
// 00888905  e8f111e9ff           call 0x719afb
// 0088890a  59                   pop ecx
// 0088890b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888900;
extern void G1_func_00888900(void*);
void func_00888900()
{
    G1_func_00888900(&G2_func_00888900);
}
