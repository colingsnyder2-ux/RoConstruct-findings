// roc 2009-06 00899d10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899d10
//
// 00899d10  a120b6a400           mov eax, dword ptr [0xa4b620]
// 00899d15  50                   push eax
// 00899d16  e817ede7ff           call 0x718a32
// 00899d1b  83c404               add esp, 4
// 00899d1e  c70508b6a40030d28a00 mov dword ptr [0xa4b608], 0x8ad230
// 00899d28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899d10(int);
void func_00899d10()
{
    G4_func_00899d10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
