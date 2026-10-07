// roc 2009-06 0089aae0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aae0
//
// 0089aae0  a144cca400           mov eax, dword ptr [0xa4cc44]
// 0089aae5  50                   push eax
// 0089aae6  e847dfe7ff           call 0x718a32
// 0089aaeb  83c404               add esp, 4
// 0089aaee  c7052ccca40030d28a00 mov dword ptr [0xa4cc2c], 0x8ad230
// 0089aaf8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aae0(int);
void func_0089aae0()
{
    G4_func_0089aae0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
