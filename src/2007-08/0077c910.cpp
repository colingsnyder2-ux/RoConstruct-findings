// roc 2007-08 0077c910  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c910
//
// 0077c910  a134818c00           mov eax, dword ptr [0x8c8134]
// 0077c915  50                   push eax
// 0077c916  e84733ebff           call 0x62fc62
// 0077c91b  83c404               add esp, 4
// 0077c91e  c7051c818c00b4707800 mov dword ptr [0x8c811c], 0x7870b4
// 0077c928  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c910(int);
void func_0077c910()
{
    G4_func_0077c910(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
