// roc 2009-06 00894540  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894540
//
// 00894540  a1e4aea300           mov eax, dword ptr [0xa3aee4]
// 00894545  50                   push eax
// 00894546  e8e744e8ff           call 0x718a32
// 0089454b  83c404               add esp, 4
// 0089454e  c705c8aea30030d28a00 mov dword ptr [0xa3aec8], 0x8ad230
// 00894558  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894540(int);
void func_00894540()
{
    G4_func_00894540(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
