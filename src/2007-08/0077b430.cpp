// roc 2007-08 0077b430  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b430
//
// 0077b430  a11c598c00           mov eax, dword ptr [0x8c591c]
// 0077b435  50                   push eax
// 0077b436  e82748ebff           call 0x62fc62
// 0077b43b  83c404               add esp, 4
// 0077b43e  c70504598c00b4707800 mov dword ptr [0x8c5904], 0x7870b4
// 0077b448  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b430(int);
void func_0077b430()
{
    G4_func_0077b430(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
