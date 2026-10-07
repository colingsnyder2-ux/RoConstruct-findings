// roc 2009-06 00885a80  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885a80
//
// 00885a80  6828d98b00           push 0x8bd928
// 00885a85  e8267cd4ff           call 0x5cd6b0
// 00885a8a  83c404               add esp, 4
// 00885a8d  a324c5a300           mov dword ptr [0xa3c524], eax
// 00885a92  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885a80(void*);
void func_00885a80()
{
    G1_VALUE = (int*)G2_func_00885a80(&G3_OBJ);
}
