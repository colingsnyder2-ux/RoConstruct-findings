// roc 2007-08 00779500  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779500
//
// 00779500  a170128c00           mov eax, dword ptr [0x8c1270]
// 00779505  50                   push eax
// 00779506  e85767ebff           call 0x62fc62
// 0077950b  83c404               add esp, 4
// 0077950e  c70558128c00b4707800 mov dword ptr [0x8c1258], 0x7870b4
// 00779518  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779500(int);
void func_00779500()
{
    G4_func_00779500(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
