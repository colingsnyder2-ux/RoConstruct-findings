// roc 2010-06 009c4cc0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4cc0
//
// 009c4cc0  68082fa100           push 0xa12f08
// 009c4cc5  e876f4bcff           call 0x594140
// 009c4cca  83c404               add esp, 4
// 009c4ccd  a35c30c000           mov dword ptr [0xc0305c], eax
// 009c4cd2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4cc0(void*);
void func_009c4cc0()
{
    G1_VALUE = (int*)G2_func_009c4cc0(&G3_OBJ);
}
