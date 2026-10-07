// roc 2009-06 00885aa0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885aa0
//
// 00885aa0  6834d98b00           push 0x8bd934
// 00885aa5  e8067cd4ff           call 0x5cd6b0
// 00885aaa  83c404               add esp, 4
// 00885aad  a328c5a300           mov dword ptr [0xa3c528], eax
// 00885ab2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885aa0(void*);
void func_00885aa0()
{
    G1_VALUE = (int*)G2_func_00885aa0(&G3_OBJ);
}
