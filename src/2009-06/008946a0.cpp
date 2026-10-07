// roc 2009-06 008946a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008946a0
//
// 008946a0  a1e8ada300           mov eax, dword ptr [0xa3ade8]
// 008946a5  50                   push eax
// 008946a6  e88743e8ff           call 0x718a32
// 008946ab  83c404               add esp, 4
// 008946ae  c705d0ada30030d28a00 mov dword ptr [0xa3add0], 0x8ad230
// 008946b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008946a0(int);
void func_008946a0()
{
    G4_func_008946a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
