// roc 2010-06 009ce580  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce580
//
// 009ce580  6860e0a200           push 0xa2e060
// 009ce585  e8b65bbcff           call 0x594140
// 009ce58a  83c404               add esp, 4
// 009ce58d  a3f092c100           mov dword ptr [0xc192f0], eax
// 009ce592  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce580(void*);
void func_009ce580()
{
    G1_VALUE = (int*)G2_func_009ce580(&G3_OBJ);
}
