// roc 2009-06 0089ccb0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ccb0
//
// 0089ccb0  a1e8f7a400           mov eax, dword ptr [0xa4f7e8]
// 0089ccb5  50                   push eax
// 0089ccb6  e877bde7ff           call 0x718a32
// 0089ccbb  83c404               add esp, 4
// 0089ccbe  c705d0f7a40030d28a00 mov dword ptr [0xa4f7d0], 0x8ad230
// 0089ccc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ccb0(int);
void func_0089ccb0()
{
    G4_func_0089ccb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
