// roc 2007-08 0077b630  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b630
//
// 0077b630  a1185e8c00           mov eax, dword ptr [0x8c5e18]
// 0077b635  50                   push eax
// 0077b636  e82746ebff           call 0x62fc62
// 0077b63b  83c404               add esp, 4
// 0077b63e  c705fc5d8c00b4707800 mov dword ptr [0x8c5dfc], 0x7870b4
// 0077b648  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b630(int);
void func_0077b630()
{
    G4_func_0077b630(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
