// roc 2010-06 009d0320  unit: seg_009d0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0320
//
// 009d0320  68fc3fbb00           push 0xbb3ffc
// 009d0325  e8163ebcff           call 0x594140
// 009d032a  83c404               add esp, 4
// 009d032d  a374b0c100           mov dword ptr [0xc1b074], eax
// 009d0332  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009d0320(void*);
void func_009d0320()
{
    G1_VALUE = (int*)G2_func_009d0320(&G3_OBJ);
}
