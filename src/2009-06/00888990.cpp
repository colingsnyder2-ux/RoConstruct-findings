// roc 2009-06 00888990  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888990
//
// 00888990  6820658900           push 0x896520
// 00888995  e86111e9ff           call 0x719afb
// 0088899a  59                   pop ecx
// 0088899b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888990;
extern void G1_func_00888990(void*);
void func_00888990()
{
    G1_func_00888990(&G2_func_00888990);
}
