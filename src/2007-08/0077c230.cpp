// roc 2007-08 0077c230  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c230
//
// 0077c230  a1a0758c00           mov eax, dword ptr [0x8c75a0]
// 0077c235  50                   push eax
// 0077c236  e8273aebff           call 0x62fc62
// 0077c23b  83c404               add esp, 4
// 0077c23e  c70588758c00b4707800 mov dword ptr [0x8c7588], 0x7870b4
// 0077c248  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c230(int);
void func_0077c230()
{
    G4_func_0077c230(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
