// roc 2007-08 00779880  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779880
//
// 00779880  a170188c00           mov eax, dword ptr [0x8c1870]
// 00779885  50                   push eax
// 00779886  e8d763ebff           call 0x62fc62
// 0077988b  83c404               add esp, 4
// 0077988e  c70558188c00b4707800 mov dword ptr [0x8c1858], 0x7870b4
// 00779898  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779880(int);
void func_00779880()
{
    G4_func_00779880(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
