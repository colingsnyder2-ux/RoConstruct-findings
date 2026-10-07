// roc 2009-06 0089c4c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c4c0
//
// 0089c4c0  a1f0eda400           mov eax, dword ptr [0xa4edf0]
// 0089c4c5  50                   push eax
// 0089c4c6  e867c5e7ff           call 0x718a32
// 0089c4cb  83c404               add esp, 4
// 0089c4ce  c705d8eda40030d28a00 mov dword ptr [0xa4edd8], 0x8ad230
// 0089c4d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c4c0(int);
void func_0089c4c0()
{
    G4_func_0089c4c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
