// roc 2007-08 00771980  unit: seg_00770000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771980
//
// 00771980  68808f7a00           push 0x7a8f80
// 00771985  e816b3dbff           call 0x52cca0
// 0077198a  83c404               add esp, 4
// 0077198d  a3ec228c00           mov dword ptr [0x8c22ec], eax
// 00771992  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00771980(void*);
void func_00771980()
{
    G1_VALUE = (int*)G2_func_00771980(&G3_OBJ);
}
