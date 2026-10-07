// roc 2009-06 00885a00  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885a00
//
// 00885a00  68f4d88b00           push 0x8bd8f4
// 00885a05  e8a67cd4ff           call 0x5cd6b0
// 00885a0a  83c404               add esp, 4
// 00885a0d  a314c5a300           mov dword ptr [0xa3c514], eax
// 00885a12  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885a00(void*);
void func_00885a00()
{
    G1_VALUE = (int*)G2_func_00885a00(&G3_OBJ);
}
