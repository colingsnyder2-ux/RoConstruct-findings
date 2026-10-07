// roc 2010-06 009ce140  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce140
//
// 009ce140  68147ea100           push 0xa17e14
// 009ce145  e8f65fbcff           call 0x594140
// 009ce14a  83c404               add esp, 4
// 009ce14d  a3e092c100           mov dword ptr [0xc192e0], eax
// 009ce152  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce140(void*);
void func_009ce140()
{
    G1_VALUE = (int*)G2_func_009ce140(&G3_OBJ);
}
