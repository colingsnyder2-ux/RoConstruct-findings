// roc 2010-06 009ce120  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce120
//
// 009ce120  68d4dfa200           push 0xa2dfd4
// 009ce125  e81660bcff           call 0x594140
// 009ce12a  83c404               add esp, 4
// 009ce12d  a34893c100           mov dword ptr [0xc19348], eax
// 009ce132  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce120(void*);
void func_009ce120()
{
    G1_VALUE = (int*)G2_func_009ce120(&G3_OBJ);
}
