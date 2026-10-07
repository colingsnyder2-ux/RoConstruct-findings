// roc 2010-06 009c4c60  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4c60
//
// 009c4c60  68e82ea100           push 0xa12ee8
// 009c4c65  e8d6f4bcff           call 0x594140
// 009c4c6a  83c404               add esp, 4
// 009c4c6d  a35030c000           mov dword ptr [0xc03050], eax
// 009c4c72  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009c4c60(void*);
void func_009c4c60()
{
    G1_VALUE = (int*)G2_func_009c4c60(&G3_OBJ);
}
