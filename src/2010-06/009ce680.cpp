// roc 2010-06 009ce680  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce680
//
// 009ce680  68ccadba00           push 0xbaadcc
// 009ce685  e8b65abcff           call 0x594140
// 009ce68a  83c404               add esp, 4
// 009ce68d  a30494c100           mov dword ptr [0xc19404], eax
// 009ce692  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce680(void*);
void func_009ce680()
{
    G1_VALUE = (int*)G2_func_009ce680(&G3_OBJ);
}
