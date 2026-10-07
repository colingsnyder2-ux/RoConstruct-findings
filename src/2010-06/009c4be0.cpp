// roc 2010-06 009c4be0  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4be0
//
// 009c4be0  68b82ea100           push 0xa12eb8
// 009c4be5  e856f5bcff           call 0x594140
// 009c4bea  83c404               add esp, 4
// 009c4bed  a34030c000           mov dword ptr [0xc03040], eax
// 009c4bf2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4be0(void*);
void func_009c4be0()
{
    G1_VALUE = (int*)G2_func_009c4be0(&G3_OBJ);
}
