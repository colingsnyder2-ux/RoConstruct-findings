// roc 2009-06 008950b0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008950b0
//
// 008950b0  a1ccdaa300           mov eax, dword ptr [0xa3dacc]
// 008950b5  50                   push eax
// 008950b6  e87739e8ff           call 0x718a32
// 008950bb  83c404               add esp, 4
// 008950be  c705b4daa30030d28a00 mov dword ptr [0xa3dab4], 0x8ad230
// 008950c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008950b0(int);
void func_008950b0()
{
    G4_func_008950b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
