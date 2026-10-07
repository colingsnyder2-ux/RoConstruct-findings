// roc 2009-06 008859c0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008859c0
//
// 008859c0  68d8d88b00           push 0x8bd8d8
// 008859c5  e8e67cd4ff           call 0x5cd6b0
// 008859ca  83c404               add esp, 4
// 008859cd  a30cc5a300           mov dword ptr [0xa3c50c], eax
// 008859d2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_008859c0(void*);
void func_008859c0()
{
    G1_VALUE = (int*)G2_func_008859c0(&G3_OBJ);
}
