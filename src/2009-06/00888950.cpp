// roc 2009-06 00888950  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888950
//
// 00888950  68a0648900           push 0x8964a0
// 00888955  e8a111e9ff           call 0x719afb
// 0088895a  59                   pop ecx
// 0088895b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888950;
extern void G1_func_00888950(void*);
void func_00888950()
{
    G1_func_00888950(&G2_func_00888950);
}
