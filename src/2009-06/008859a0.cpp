// roc 2009-06 008859a0  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008859a0
//
// 008859a0  68d0d88b00           push 0x8bd8d0
// 008859a5  e8067dd4ff           call 0x5cd6b0
// 008859aa  83c404               add esp, 4
// 008859ad  a308c5a300           mov dword ptr [0xa3c508], eax
// 008859b2  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_008859a0(void*);
void func_008859a0()
{
    G1_VALUE = (int*)G2_func_008859a0(&G3_OBJ);
}
