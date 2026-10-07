// roc 2007-08 0077c190  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c190
//
// 0077c190  a164778c00           mov eax, dword ptr [0x8c7764]
// 0077c195  50                   push eax
// 0077c196  e8c73aebff           call 0x62fc62
// 0077c19b  83c404               add esp, 4
// 0077c19e  c7054c778c00b4707800 mov dword ptr [0x8c774c], 0x7870b4
// 0077c1a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c190(int);
void func_0077c190()
{
    G4_func_0077c190(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
