// roc 2007-08 0077bb20  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bb20
//
// 0077bb20  a114638c00           mov eax, dword ptr [0x8c6314]
// 0077bb25  50                   push eax
// 0077bb26  e83741ebff           call 0x62fc62
// 0077bb2b  83c404               add esp, 4
// 0077bb2e  c705f8628c00b4707800 mov dword ptr [0x8c62f8], 0x7870b4
// 0077bb38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bb20(int);
void func_0077bb20()
{
    G4_func_0077bb20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
