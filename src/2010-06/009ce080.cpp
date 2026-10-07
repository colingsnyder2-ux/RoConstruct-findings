// roc 2010-06 009ce080  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce080
//
// 009ce080  68a4dfa200           push 0xa2dfa4
// 009ce085  e8b660bcff           call 0x594140
// 009ce08a  83c404               add esp, 4
// 009ce08d  a3c492c100           mov dword ptr [0xc192c4], eax
// 009ce092  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce080(void*);
void func_009ce080()
{
    G1_VALUE = (int*)G2_func_009ce080(&G3_OBJ);
}
