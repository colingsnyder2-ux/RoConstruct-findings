// roc 2010-06 009c4d20  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4d20
//
// 009c4d20  682c2fa100           push 0xa12f2c
// 009c4d25  e816f4bcff           call 0x594140
// 009c4d2a  83c404               add esp, 4
// 009c4d2d  a36830c000           mov dword ptr [0xc03068], eax
// 009c4d32  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4d20(void*);
void func_009c4d20()
{
    G1_VALUE = (int*)G2_func_009c4d20(&G3_OBJ);
}
