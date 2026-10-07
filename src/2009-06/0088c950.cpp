// roc 2009-06 0088c950  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c950
//
// 0088c950  682c828d00           push 0x8d822c
// 0088c955  e8560dd4ff           call 0x5cd6b0
// 0088c95a  83c404               add esp, 4
// 0088c95d  a360b0a400           mov dword ptr [0xa4b060], eax
// 0088c962  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_0088c950(void*);
void func_0088c950()
{
    G1_VALUE = (int*)G2_func_0088c950(&G3_OBJ);
}
