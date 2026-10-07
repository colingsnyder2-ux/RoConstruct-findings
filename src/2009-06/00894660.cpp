// roc 2009-06 00894660  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894660
//
// 00894660  a1b0ada300           mov eax, dword ptr [0xa3adb0]
// 00894665  50                   push eax
// 00894666  e8c743e8ff           call 0x718a32
// 0089466b  83c404               add esp, 4
// 0089466e  c70598ada30030d28a00 mov dword ptr [0xa3ad98], 0x8ad230
// 00894678  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894660(int);
void func_00894660()
{
    G4_func_00894660(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
