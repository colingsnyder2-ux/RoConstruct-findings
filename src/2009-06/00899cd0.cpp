// roc 2009-06 00899cd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899cd0
//
// 00899cd0  a1f4b6a400           mov eax, dword ptr [0xa4b6f4]
// 00899cd5  50                   push eax
// 00899cd6  e857ede7ff           call 0x718a32
// 00899cdb  83c404               add esp, 4
// 00899cde  c705dcb6a40030d28a00 mov dword ptr [0xa4b6dc], 0x8ad230
// 00899ce8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899cd0(int);
void func_00899cd0()
{
    G4_func_00899cd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
