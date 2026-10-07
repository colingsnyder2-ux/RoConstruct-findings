// roc 2007-08 00779490  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779490
//
// 00779490  a198118c00           mov eax, dword ptr [0x8c1198]
// 00779495  50                   push eax
// 00779496  e8c767ebff           call 0x62fc62
// 0077949b  83c404               add esp, 4
// 0077949e  c70580118c00b4707800 mov dword ptr [0x8c1180], 0x7870b4
// 007794a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779490(int);
void func_00779490()
{
    G4_func_00779490(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
