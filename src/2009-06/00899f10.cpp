// roc 2009-06 00899f10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899f10
//
// 00899f10  a1e8b7a400           mov eax, dword ptr [0xa4b7e8]
// 00899f15  50                   push eax
// 00899f16  e817ebe7ff           call 0x718a32
// 00899f1b  83c404               add esp, 4
// 00899f1e  c705d0b7a40030d28a00 mov dword ptr [0xa4b7d0], 0x8ad230
// 00899f28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899f10(int);
void func_00899f10()
{
    G4_func_00899f10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
