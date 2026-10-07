// roc 2009-06 00895d30  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895d30
//
// 00895d30  a190f0a300           mov eax, dword ptr [0xa3f090]
// 00895d35  50                   push eax
// 00895d36  e8f72ce8ff           call 0x718a32
// 00895d3b  83c404               add esp, 4
// 00895d3e  c70578f0a30030d28a00 mov dword ptr [0xa3f078], 0x8ad230
// 00895d48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895d30(int);
void func_00895d30()
{
    G4_func_00895d30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
