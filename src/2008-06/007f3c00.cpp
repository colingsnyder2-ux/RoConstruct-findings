// roc 2008-06 007f3c00  unit: seg_007f0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3c00
//
// 007f3c00  68e0048300           push 0x8304e0
// 007f3c05  e88606d6ff           call 0x554290
// 007f3c0a  83c404               add esp, 4
// 007f3c0d  a388539700           mov dword ptr [0x975388], eax
// 007f3c12  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_007f3c00(void*);
void func_007f3c00()
{
    G1_VALUE = (int*)G2_func_007f3c00(&G3_OBJ);
}
