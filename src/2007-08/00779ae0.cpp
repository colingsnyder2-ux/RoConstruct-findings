// roc 2007-08 00779ae0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779ae0
//
// 00779ae0  a1641d8c00           mov eax, dword ptr [0x8c1d64]
// 00779ae5  50                   push eax
// 00779ae6  e87761ebff           call 0x62fc62
// 00779aeb  83c404               add esp, 4
// 00779aee  c7054c1d8c00b4707800 mov dword ptr [0x8c1d4c], 0x7870b4
// 00779af8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779ae0(int);
void func_00779ae0()
{
    G4_func_00779ae0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
