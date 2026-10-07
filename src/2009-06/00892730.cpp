// roc 2009-06 00892730  unit: seg_00890000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892730
//
// 00892730  6874d98e00           push 0x8ed974
// 00892735  e876afd3ff           call 0x5cd6b0
// 0089273a  83c404               add esp, 4
// 0089273d  a30001a500           mov dword ptr [0xa50100], eax
// 00892742  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G3_OBJ;
extern int* G1_VALUE;
extern int __cdecl G2_func_00892730(void*);
void func_00892730()
{
    G1_VALUE = (int*)G2_func_00892730(&G3_OBJ);
}
