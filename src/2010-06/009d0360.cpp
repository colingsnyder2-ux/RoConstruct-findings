// roc 2010-06 009d0360  unit: seg_009d0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0360
//
// 009d0360  687463a300           push 0xa36374
// 009d0365  e8d63dbcff           call 0x594140
// 009d036a  83c404               add esp, 4
// 009d036d  a3fcb1c100           mov dword ptr [0xc1b1fc], eax
// 009d0372  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_009d0360(void*);
void func_009d0360()
{
    G1_VALUE = (int*)G2_func_009d0360(&G3_OBJ);
}
