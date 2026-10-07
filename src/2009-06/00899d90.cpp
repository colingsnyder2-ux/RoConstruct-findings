// roc 2009-06 00899d90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899d90
//
// 00899d90  a148b7a400           mov eax, dword ptr [0xa4b748]
// 00899d95  50                   push eax
// 00899d96  e897ece7ff           call 0x718a32
// 00899d9b  83c404               add esp, 4
// 00899d9e  c70530b7a40030d28a00 mov dword ptr [0xa4b730], 0x8ad230
// 00899da8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899d90(int);
void func_00899d90()
{
    G4_func_00899d90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
