// roc 2009-06 00894640  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894640
//
// 00894640  a1ccada300           mov eax, dword ptr [0xa3adcc]
// 00894645  50                   push eax
// 00894646  e8e743e8ff           call 0x718a32
// 0089464b  83c404               add esp, 4
// 0089464e  c705b4ada30030d28a00 mov dword ptr [0xa3adb4], 0x8ad230
// 00894658  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894640(int);
void func_00894640()
{
    G4_func_00894640(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
