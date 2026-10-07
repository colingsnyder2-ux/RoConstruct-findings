// roc 2009-06 0089cc10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cc10
//
// 0089cc10  a1c4f7a400           mov eax, dword ptr [0xa4f7c4]
// 0089cc15  50                   push eax
// 0089cc16  e817bee7ff           call 0x718a32
// 0089cc1b  83c404               add esp, 4
// 0089cc1e  c705a8f7a40030d28a00 mov dword ptr [0xa4f7a8], 0x8ad230
// 0089cc28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cc10(int);
void func_0089cc10()
{
    G4_func_0089cc10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
