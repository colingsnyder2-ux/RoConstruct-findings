// roc 2009-06 00885a20  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885a20
//
// 00885a20  6808d98b00           push 0x8bd908
// 00885a25  e8867cd4ff           call 0x5cd6b0
// 00885a2a  83c404               add esp, 4
// 00885a2d  a318c5a300           mov dword ptr [0xa3c518], eax
// 00885a32  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885a20(void*);
void func_00885a20()
{
    G1_VALUE = (int*)G2_func_00885a20(&G3_OBJ);
}
