// roc 2007-08 0077be20  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077be20
//
// 0077be20  a1246d8c00           mov eax, dword ptr [0x8c6d24]
// 0077be25  50                   push eax
// 0077be26  e8373eebff           call 0x62fc62
// 0077be2b  83c404               add esp, 4
// 0077be2e  c705086d8c00b4707800 mov dword ptr [0x8c6d08], 0x7870b4
// 0077be38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077be20(int);
void func_0077be20()
{
    G4_func_0077be20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
