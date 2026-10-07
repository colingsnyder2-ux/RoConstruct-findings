// roc 2009-06 00705270  unit: RBX::AdornG3D  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705270
//
// 00705270  68dcb48d00           push 0x8db4dc
// 00705275  e896ffffff           call 0x705210
// 0070527a  59                   pop ecx
// 0070527b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00705270;
extern void G1_func_00705270(void*);
void func_00705270()
{
    G1_func_00705270(&G2_func_00705270);
}
