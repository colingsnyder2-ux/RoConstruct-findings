// roc 2007-08 0077a330  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a330
//
// 0077a330  a1f8288c00           mov eax, dword ptr [0x8c28f8]
// 0077a335  50                   push eax
// 0077a336  e82759ebff           call 0x62fc62
// 0077a33b  83c404               add esp, 4
// 0077a33e  c705e0288c00b4707800 mov dword ptr [0x8c28e0], 0x7870b4
// 0077a348  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a330(int);
void func_0077a330()
{
    G4_func_0077a330(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
