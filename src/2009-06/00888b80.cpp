// roc 2009-06 00888b80  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888b80
//
// 00888b80  68b06a8900           push 0x896ab0
// 00888b85  e8710fe9ff           call 0x719afb
// 00888b8a  59                   pop ecx
// 00888b8b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888b80;
extern void G1_func_00888b80(void*);
void func_00888b80()
{
    G1_func_00888b80(&G2_func_00888b80);
}
