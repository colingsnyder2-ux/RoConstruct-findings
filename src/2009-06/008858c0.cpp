// roc 2009-06 008858c0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008858c0
//
// 008858c0  6880d88b00           push 0x8bd880
// 008858c5  e8e67dd4ff           call 0x5cd6b0
// 008858ca  83c404               add esp, 4
// 008858cd  a3ecc4a300           mov dword ptr [0xa3c4ec], eax
// 008858d2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_008858c0(void*);
void func_008858c0()
{
    G1_VALUE = (int*)G2_func_008858c0(&G3_OBJ);
}
