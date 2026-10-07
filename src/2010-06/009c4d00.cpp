// roc 2010-06 009c4d00  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4d00
//
// 009c4d00  681c2fa100           push 0xa12f1c
// 009c4d05  e836f4bcff           call 0x594140
// 009c4d0a  83c404               add esp, 4
// 009c4d0d  a36430c000           mov dword ptr [0xc03064], eax
// 009c4d12  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4d00(void*);
void func_009c4d00()
{
    G1_VALUE = (int*)G2_func_009c4d00(&G3_OBJ);
}
