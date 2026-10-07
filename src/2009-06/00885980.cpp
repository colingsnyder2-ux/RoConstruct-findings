// roc 2009-06 00885980  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885980
//
// 00885980  68c8d88b00           push 0x8bd8c8
// 00885985  e8267dd4ff           call 0x5cd6b0
// 0088598a  83c404               add esp, 4
// 0088598d  a304c5a300           mov dword ptr [0xa3c504], eax
// 00885992  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885980(void*);
void func_00885980()
{
    G1_VALUE = (int*)G2_func_00885980(&G3_OBJ);
}
