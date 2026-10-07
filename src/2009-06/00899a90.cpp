// roc 2009-06 00899a90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899a90
//
// 00899a90  a104b3a400           mov eax, dword ptr [0xa4b304]
// 00899a95  50                   push eax
// 00899a96  e897efe7ff           call 0x718a32
// 00899a9b  83c404               add esp, 4
// 00899a9e  c705ecb2a40030d28a00 mov dword ptr [0xa4b2ec], 0x8ad230
// 00899aa8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899a90(int);
void func_00899a90()
{
    G4_func_00899a90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
