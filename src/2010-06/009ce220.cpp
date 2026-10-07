// roc 2010-06 009ce220  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce220
//
// 009ce220  68e8dfa200           push 0xa2dfe8
// 009ce225  e8165fbcff           call 0x594140
// 009ce22a  83c404               add esp, 4
// 009ce22d  a33493c100           mov dword ptr [0xc19334], eax
// 009ce232  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce220(void*);
void func_009ce220()
{
    G1_VALUE = (int*)G2_func_009ce220(&G3_OBJ);
}
