// roc 2009-06 0089bd10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bd10
//
// 0089bd10  a1a0e4a400           mov eax, dword ptr [0xa4e4a0]
// 0089bd15  50                   push eax
// 0089bd16  e817cde7ff           call 0x718a32
// 0089bd1b  83c404               add esp, 4
// 0089bd1e  c70588e4a40030d28a00 mov dword ptr [0xa4e488], 0x8ad230
// 0089bd28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bd10(int);
void func_0089bd10()
{
    G4_func_0089bd10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
