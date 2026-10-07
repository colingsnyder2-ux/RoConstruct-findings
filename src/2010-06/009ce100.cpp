// roc 2010-06 009ce100  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce100
//
// 009ce100  68c8dfa200           push 0xa2dfc8
// 009ce105  e83660bcff           call 0x594140
// 009ce10a  83c404               add esp, 4
// 009ce10d  a31c93c100           mov dword ptr [0xc1931c], eax
// 009ce112  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce100(void*);
void func_009ce100()
{
    G1_VALUE = (int*)G2_func_009ce100(&G3_OBJ);
}
