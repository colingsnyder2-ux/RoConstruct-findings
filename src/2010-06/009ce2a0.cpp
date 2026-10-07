// roc 2010-06 009ce2a0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce2a0
//
// 009ce2a0  68f8dfa200           push 0xa2dff8
// 009ce2a5  e8965ebcff           call 0x594140
// 009ce2aa  83c404               add esp, 4
// 009ce2ad  a33893c100           mov dword ptr [0xc19338], eax
// 009ce2b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce2a0(void*);
void func_009ce2a0()
{
    G1_VALUE = (int*)G2_func_009ce2a0(&G3_OBJ);
}
