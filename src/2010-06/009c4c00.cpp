// roc 2010-06 009c4c00  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4c00
//
// 009c4c00  68c82ea100           push 0xa12ec8
// 009c4c05  e836f5bcff           call 0x594140
// 009c4c0a  83c404               add esp, 4
// 009c4c0d  a34430c000           mov dword ptr [0xc03044], eax
// 009c4c12  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4c00(void*);
void func_009c4c00()
{
    G1_VALUE = (int*)G2_func_009c4c00(&G3_OBJ);
}
