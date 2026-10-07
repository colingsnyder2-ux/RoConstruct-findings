// roc 2010-06 009ce560  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce560
//
// 009ce560  6858e0a200           push 0xa2e058
// 009ce565  e8d65bbcff           call 0x594140
// 009ce56a  83c404               add esp, 4
// 009ce56d  a32893c100           mov dword ptr [0xc19328], eax
// 009ce572  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce560(void*);
void func_009ce560()
{
    G1_VALUE = (int*)G2_func_009ce560(&G3_OBJ);
}
