// roc 2007-08 0077c170  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c170
//
// 0077c170  a114748c00           mov eax, dword ptr [0x8c7414]
// 0077c175  50                   push eax
// 0077c176  e8e73aebff           call 0x62fc62
// 0077c17b  83c404               add esp, 4
// 0077c17e  c705fc738c00b4707800 mov dword ptr [0x8c73fc], 0x7870b4
// 0077c188  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c170(int);
void func_0077c170()
{
    G4_func_0077c170(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
