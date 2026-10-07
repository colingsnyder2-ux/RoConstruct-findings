// roc 2010-06 009ce480  unit: seg_009c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ce480
//
// 009ce480  680002a000           push 0xa00200
// 009ce485  e8b65cbcff           call 0x594140
// 009ce48a  83c404               add esp, 4
// 009ce48d  a3dc92c100           mov dword ptr [0xc192dc], eax
// 009ce492  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009ce480(void*);
void func_009ce480()
{
    G1_VALUE = (int*)G2_func_009ce480(&G3_OBJ);
}
