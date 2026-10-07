// roc 2009-06 00899c30  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899c30
//
// 00899c30  a140b5a400           mov eax, dword ptr [0xa4b540]
// 00899c35  50                   push eax
// 00899c36  e8f7ede7ff           call 0x718a32
// 00899c3b  83c404               add esp, 4
// 00899c3e  c70528b5a40030d28a00 mov dword ptr [0xa4b528], 0x8ad230
// 00899c48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899c30(int);
void func_00899c30()
{
    G4_func_00899c30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
