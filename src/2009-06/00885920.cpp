// roc 2009-06 00885920  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885920
//
// 00885920  68a4d88b00           push 0x8bd8a4
// 00885925  e8867dd4ff           call 0x5cd6b0
// 0088592a  83c404               add esp, 4
// 0088592d  a3f8c4a300           mov dword ptr [0xa3c4f8], eax
// 00885932  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885920(void*);
void func_00885920()
{
    G1_VALUE = (int*)G2_func_00885920(&G3_OBJ);
}
