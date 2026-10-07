// roc 2010-06 009c4c20  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4c20
//
// 009c4c20  68d42ea100           push 0xa12ed4
// 009c4c25  e816f5bcff           call 0x594140
// 009c4c2a  83c404               add esp, 4
// 009c4c2d  a34830c000           mov dword ptr [0xc03048], eax
// 009c4c32  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4c20(void*);
void func_009c4c20()
{
    G1_VALUE = (int*)G2_func_009c4c20(&G3_OBJ);
}
