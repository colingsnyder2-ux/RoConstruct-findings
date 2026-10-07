// roc 2010-06 009c9970  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9970
//
// 009c9970  68a039a000           push 0xa039a0
// 009c9975  e8c6a7bcff           call 0x594140
// 009c997a  83c404               add esp, 4
// 009c997d  a3c4b5c000           mov dword ptr [0xc0b5c4], eax
// 009c9982  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c9970(void*);
void func_009c9970()
{
    G1_VALUE = (int*)G2_func_009c9970(&G3_OBJ);
}
