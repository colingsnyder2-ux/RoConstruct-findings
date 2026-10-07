// roc 2009-06 00885a40  unit: seg_00880000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885a40
//
// 00885a40  6814d98b00           push 0x8bd914
// 00885a45  e8667cd4ff           call 0x5cd6b0
// 00885a4a  83c404               add esp, 4
// 00885a4d  a31cc5a300           mov dword ptr [0xa3c51c], eax
// 00885a52  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00885a40(void*);
void func_00885a40()
{
    G1_VALUE = (int*)G2_func_00885a40(&G3_OBJ);
}
