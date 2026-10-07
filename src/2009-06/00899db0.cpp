// roc 2009-06 00899db0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899db0
//
// 00899db0  a1c0b7a400           mov eax, dword ptr [0xa4b7c0]
// 00899db5  50                   push eax
// 00899db6  e877ece7ff           call 0x718a32
// 00899dbb  83c404               add esp, 4
// 00899dbe  c705a8b7a40030d28a00 mov dword ptr [0xa4b7a8], 0x8ad230
// 00899dc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899db0(int);
void func_00899db0()
{
    G4_func_00899db0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
