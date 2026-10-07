// roc 2009-06 00885a60  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885a60
//
// 00885a60  681cd98b00           push 0x8bd91c
// 00885a65  e8467cd4ff           call 0x5cd6b0
// 00885a6a  83c404               add esp, 4
// 00885a6d  a320c5a300           mov dword ptr [0xa3c520], eax
// 00885a72  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885a60(void*);
void func_00885a60()
{
    G1_VALUE = (int*)G2_func_00885a60(&G3_OBJ);
}
