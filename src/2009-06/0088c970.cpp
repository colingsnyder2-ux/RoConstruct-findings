// roc 2009-06 0088c970  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c970
//
// 0088c970  680ccb8a00           push 0x8acb0c
// 0088c975  e8360dd4ff           call 0x5cd6b0
// 0088c97a  83c404               add esp, 4
// 0088c97d  a364b0a400           mov dword ptr [0xa4b064], eax
// 0088c982  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c970(void*);
void func_0088c970()
{
    G1_VALUE = (int*)G2_func_0088c970(&G3_OBJ);
}
