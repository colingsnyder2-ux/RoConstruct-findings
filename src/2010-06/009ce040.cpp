// roc 2010-06 009ce040  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce040
//
// 009ce040  688cdfa200           push 0xa2df8c
// 009ce045  e8f660bcff           call 0x594140
// 009ce04a  83c404               add esp, 4
// 009ce04d  a3fc92c100           mov dword ptr [0xc192fc], eax
// 009ce052  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce040(void*);
void func_009ce040()
{
    G1_VALUE = (int*)G2_func_009ce040(&G3_OBJ);
}
