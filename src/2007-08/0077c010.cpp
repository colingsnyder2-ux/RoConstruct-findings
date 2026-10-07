// roc 2007-08 0077c010  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c010
//
// 0077c010  a124768c00           mov eax, dword ptr [0x8c7624]
// 0077c015  50                   push eax
// 0077c016  e8473cebff           call 0x62fc62
// 0077c01b  83c404               add esp, 4
// 0077c01e  c7050c768c00b4707800 mov dword ptr [0x8c760c], 0x7870b4
// 0077c028  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c010(int);
void func_0077c010()
{
    G4_func_0077c010(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
