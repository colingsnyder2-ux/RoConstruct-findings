// roc 2010-06 009c4d80  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4d80
//
// 009c4d80  68542fa100           push 0xa12f54
// 009c4d85  e8b6f3bcff           call 0x594140
// 009c4d8a  83c404               add esp, 4
// 009c4d8d  a37430c000           mov dword ptr [0xc03074], eax
// 009c4d92  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4d80(void*);
void func_009c4d80()
{
    G1_VALUE = (int*)G2_func_009c4d80(&G3_OBJ);
}
