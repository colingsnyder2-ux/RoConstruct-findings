// roc 2007-08 00779540  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779540
//
// 00779540  a18c128c00           mov eax, dword ptr [0x8c128c]
// 00779545  50                   push eax
// 00779546  e81767ebff           call 0x62fc62
// 0077954b  83c404               add esp, 4
// 0077954e  c70574128c00b4707800 mov dword ptr [0x8c1274], 0x7870b4
// 00779558  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779540(int);
void func_00779540()
{
    G4_func_00779540(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
