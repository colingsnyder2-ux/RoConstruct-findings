// roc 2011-06 00a223b0  unit: seg_00a20000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a223b0
//
// 00a223b0  68a436a900           push 0xa936a4
// 00a223b5  e88607b7ff           call 0x592b40
// 00a223ba  83c404               add esp, 4
// 00a223bd  a3e8b8cc00           mov dword ptr [0xccb8e8], eax
// 00a223c2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00a223b0(void*);
void func_00a223b0()
{
    G1_VALUE = (int*)G2_func_00a223b0(&G3_OBJ);
}
