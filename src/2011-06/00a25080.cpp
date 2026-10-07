// roc 2011-06 00a25080  unit: seg_00a20000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a25080
//
// 00a25080  68e4c7a900           push 0xa9c7e4
// 00a25085  e8b6dab6ff           call 0x592b40
// 00a2508a  83c404               add esp, 4
// 00a2508d  a3a4dfcc00           mov dword ptr [0xccdfa4], eax
// 00a25092  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00a25080(void*);
void func_00a25080()
{
    G1_VALUE = (int*)G2_func_00a25080(&G3_OBJ);
}
