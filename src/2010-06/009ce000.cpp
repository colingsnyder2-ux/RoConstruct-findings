// roc 2010-06 009ce000  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce000
//
// 009ce000  6880dfa200           push 0xa2df80
// 009ce005  e83661bcff           call 0x594140
// 009ce00a  83c404               add esp, 4
// 009ce00d  a39493c100           mov dword ptr [0xc19394], eax
// 009ce012  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce000(void*);
void func_009ce000()
{
    G1_VALUE = (int*)G2_func_009ce000(&G3_OBJ);
}
