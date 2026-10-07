// roc 2009-06 0088c750  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c750
//
// 0088c750  6868718d00           push 0x8d7168
// 0088c755  e8560fd4ff           call 0x5cd6b0
// 0088c75a  83c404               add esp, 4
// 0088c75d  a370b0a400           mov dword ptr [0xa4b070], eax
// 0088c762  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c750(void*);
void func_0088c750()
{
    G1_VALUE = (int*)G2_func_0088c750(&G3_OBJ);
}
