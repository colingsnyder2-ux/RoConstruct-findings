// roc 2010-06 009ce280  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce280
//
// 009ce280  68f4dfa200           push 0xa2dff4
// 009ce285  e8b65ebcff           call 0x594140
// 009ce28a  83c404               add esp, 4
// 009ce28d  a3f892c100           mov dword ptr [0xc192f8], eax
// 009ce292  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce280(void*);
void func_009ce280()
{
    G1_VALUE = (int*)G2_func_009ce280(&G3_OBJ);
}
