// roc 2007-08 0077a020  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a020
//
// 0077a020  a13c278c00           mov eax, dword ptr [0x8c273c]
// 0077a025  50                   push eax
// 0077a026  e8375cebff           call 0x62fc62
// 0077a02b  83c404               add esp, 4
// 0077a02e  c70524278c00b4707800 mov dword ptr [0x8c2724], 0x7870b4
// 0077a038  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a020(int);
void func_0077a020()
{
    G4_func_0077a020(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
