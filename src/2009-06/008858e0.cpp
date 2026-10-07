// roc 2009-06 008858e0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008858e0
//
// 008858e0  6890d88b00           push 0x8bd890
// 008858e5  e8c67dd4ff           call 0x5cd6b0
// 008858ea  83c404               add esp, 4
// 008858ed  a3f0c4a300           mov dword ptr [0xa3c4f0], eax
// 008858f2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_008858e0(void*);
void func_008858e0()
{
    G1_VALUE = (int*)G2_func_008858e0(&G3_OBJ);
}
