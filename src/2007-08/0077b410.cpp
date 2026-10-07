// roc 2007-08 0077b410  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b410
//
// 0077b410  a1e4588c00           mov eax, dword ptr [0x8c58e4]
// 0077b415  50                   push eax
// 0077b416  e84748ebff           call 0x62fc62
// 0077b41b  83c404               add esp, 4
// 0077b41e  c705cc588c00b4707800 mov dword ptr [0x8c58cc], 0x7870b4
// 0077b428  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b410(int);
void func_0077b410()
{
    G4_func_0077b410(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
