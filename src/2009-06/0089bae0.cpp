// roc 2009-06 0089bae0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bae0
//
// 0089bae0  a158e3a400           mov eax, dword ptr [0xa4e358]
// 0089bae5  50                   push eax
// 0089bae6  e847cfe7ff           call 0x718a32
// 0089baeb  83c404               add esp, 4
// 0089baee  c70540e3a40030d28a00 mov dword ptr [0xa4e340], 0x8ad230
// 0089baf8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bae0(int);
void func_0089bae0()
{
    G4_func_0089bae0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
