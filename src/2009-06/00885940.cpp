// roc 2009-06 00885940  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885940
//
// 00885940  68b0d88b00           push 0x8bd8b0
// 00885945  e8667dd4ff           call 0x5cd6b0
// 0088594a  83c404               add esp, 4
// 0088594d  a3fcc4a300           mov dword ptr [0xa3c4fc], eax
// 00885952  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885940(void*);
void func_00885940()
{
    G1_VALUE = (int*)G2_func_00885940(&G3_OBJ);
}
