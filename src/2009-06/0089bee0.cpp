// roc 2009-06 0089bee0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bee0
//
// 0089bee0  a198e7a400           mov eax, dword ptr [0xa4e798]
// 0089bee5  50                   push eax
// 0089bee6  e847cbe7ff           call 0x718a32
// 0089beeb  83c404               add esp, 4
// 0089beee  c70580e7a40030d28a00 mov dword ptr [0xa4e780], 0x8ad230
// 0089bef8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bee0(int);
void func_0089bee0()
{
    G4_func_0089bee0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
