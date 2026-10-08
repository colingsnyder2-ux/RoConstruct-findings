// roc 2007-08 0077c050  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c050
//
// 0077c050  a1f8768c00           mov eax, dword ptr [0x8c76f8]
// 0077c055  50                   push eax
// 0077c056  e8073cebff           call 0x62fc62
// 0077c05b  83c404               add esp, 4
// 0077c05e  c705e0768c00b4707800 mov dword ptr [0x8c76e0], 0x7870b4
// 0077c068  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c050(int);
void func_0077c050()
{
    G4_func_0077c050(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
