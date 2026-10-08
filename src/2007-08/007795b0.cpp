// roc 2007-08 007795b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007795b0
//
// 007795b0  a158158c00           mov eax, dword ptr [0x8c1558]
// 007795b5  50                   push eax
// 007795b6  e8a766ebff           call 0x62fc62
// 007795bb  83c404               add esp, 4
// 007795be  c70540158c00b4707800 mov dword ptr [0x8c1540], 0x7870b4
// 007795c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007795b0(int);
void func_007795b0()
{
    G4_func_007795b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
