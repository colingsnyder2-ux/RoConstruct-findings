// roc 2007-08 00779920  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779920
//
// 00779920  a100198c00           mov eax, dword ptr [0x8c1900]
// 00779925  50                   push eax
// 00779926  e83763ebff           call 0x62fc62
// 0077992b  83c404               add esp, 4
// 0077992e  c705e8188c00b4707800 mov dword ptr [0x8c18e8], 0x7870b4
// 00779938  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779920(int);
void func_00779920()
{
    G4_func_00779920(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
