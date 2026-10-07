// roc 2009-06 008859e0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008859e0
//
// 008859e0  68e4d88b00           push 0x8bd8e4
// 008859e5  e8c67cd4ff           call 0x5cd6b0
// 008859ea  83c404               add esp, 4
// 008859ed  a310c5a300           mov dword ptr [0xa3c510], eax
// 008859f2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_008859e0(void*);
void func_008859e0()
{
    G1_VALUE = (int*)G2_func_008859e0(&G3_OBJ);
}
