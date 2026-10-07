// roc 2009-06 00885960  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885960
//
// 00885960  68bcd88b00           push 0x8bd8bc
// 00885965  e8467dd4ff           call 0x5cd6b0
// 0088596a  83c404               add esp, 4
// 0088596d  a300c5a300           mov dword ptr [0xa3c500], eax
// 00885972  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885960(void*);
void func_00885960()
{
    G1_VALUE = (int*)G2_func_00885960(&G3_OBJ);
}
