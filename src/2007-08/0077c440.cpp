// roc 2007-08 0077c440  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c440
//
// 0077c440  a1787d8c00           mov eax, dword ptr [0x8c7d78]
// 0077c445  50                   push eax
// 0077c446  e81738ebff           call 0x62fc62
// 0077c44b  83c404               add esp, 4
// 0077c44e  c705607d8c00b4707800 mov dword ptr [0x8c7d60], 0x7870b4
// 0077c458  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c440(int);
void func_0077c440()
{
    G4_func_0077c440(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
