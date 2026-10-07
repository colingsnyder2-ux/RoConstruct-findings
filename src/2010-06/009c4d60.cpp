// roc 2010-06 009c4d60  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4d60
//
// 009c4d60  684c2fa100           push 0xa12f4c
// 009c4d65  e8d6f3bcff           call 0x594140
// 009c4d6a  83c404               add esp, 4
// 009c4d6d  a37030c000           mov dword ptr [0xc03070], eax
// 009c4d72  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4d60(void*);
void func_009c4d60()
{
    G1_VALUE = (int*)G2_func_009c4d60(&G3_OBJ);
}
