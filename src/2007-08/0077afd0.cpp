// roc 2007-08 0077afd0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077afd0
//
// 0077afd0  a1f0518c00           mov eax, dword ptr [0x8c51f0]
// 0077afd5  50                   push eax
// 0077afd6  e8874cebff           call 0x62fc62
// 0077afdb  83c404               add esp, 4
// 0077afde  c705d8518c00b4707800 mov dword ptr [0x8c51d8], 0x7870b4
// 0077afe8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077afd0(int);
void func_0077afd0()
{
    G4_func_0077afd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
