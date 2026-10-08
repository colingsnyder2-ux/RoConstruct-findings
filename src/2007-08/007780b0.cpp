// roc 2007-08 007780b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007780b0
//
// 007780b0  a138df8b00           mov eax, dword ptr [0x8bdf38]
// 007780b5  50                   push eax
// 007780b6  e8a77bebff           call 0x62fc62
// 007780bb  83c404               add esp, 4
// 007780be  c70520df8b00b4707800 mov dword ptr [0x8bdf20], 0x7870b4
// 007780c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007780b0(int);
void func_007780b0()
{
    G4_func_007780b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
