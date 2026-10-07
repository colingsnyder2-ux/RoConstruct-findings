// roc 2010-06 009ce1a0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce1a0
//
// 009ce1a0  68e0dfa200           push 0xa2dfe0
// 009ce1a5  e8965fbcff           call 0x594140
// 009ce1aa  83c404               add esp, 4
// 009ce1ad  a35893c100           mov dword ptr [0xc19358], eax
// 009ce1b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce1a0(void*);
void func_009ce1a0()
{
    G1_VALUE = (int*)G2_func_009ce1a0(&G3_OBJ);
}
