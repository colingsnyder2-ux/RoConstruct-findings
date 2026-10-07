// roc 2009-06 0089afd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089afd0
//
// 0089afd0  a100d1a400           mov eax, dword ptr [0xa4d100]
// 0089afd5  50                   push eax
// 0089afd6  e857dae7ff           call 0x718a32
// 0089afdb  83c404               add esp, 4
// 0089afde  c705e4d0a40030d28a00 mov dword ptr [0xa4d0e4], 0x8ad230
// 0089afe8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089afd0(int);
void func_0089afd0()
{
    G4_func_0089afd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
