// roc 2009-06 0088c770  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c770
//
// 0088c770  68d0d88b00           push 0x8bd8d0
// 0088c775  e8360fd4ff           call 0x5cd6b0
// 0088c77a  83c404               add esp, 4
// 0088c77d  a35cb0a400           mov dword ptr [0xa4b05c], eax
// 0088c782  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c770(void*);
void func_0088c770()
{
    G1_VALUE = (int*)G2_func_0088c770(&G3_OBJ);
}
