// roc 2007-08 0077c1d0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c1d0
//
// 0077c1d0  a178768c00           mov eax, dword ptr [0x8c7678]
// 0077c1d5  50                   push eax
// 0077c1d6  e8873aebff           call 0x62fc62
// 0077c1db  83c404               add esp, 4
// 0077c1de  c70560768c00b4707800 mov dword ptr [0x8c7660], 0x7870b4
// 0077c1e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c1d0(int);
void func_0077c1d0()
{
    G4_func_0077c1d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
