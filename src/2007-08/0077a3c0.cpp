// roc 2007-08 0077a3c0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a3c0
//
// 0077a3c0  a1a82e8c00           mov eax, dword ptr [0x8c2ea8]
// 0077a3c5  50                   push eax
// 0077a3c6  e89758ebff           call 0x62fc62
// 0077a3cb  83c404               add esp, 4
// 0077a3ce  c7058c2e8c00b4707800 mov dword ptr [0x8c2e8c], 0x7870b4
// 0077a3d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a3c0(int);
void func_0077a3c0()
{
    G4_func_0077a3c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
