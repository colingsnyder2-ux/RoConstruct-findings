// roc 2009-06 0089c100  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c100
//
// 0089c100  a1f0e9a400           mov eax, dword ptr [0xa4e9f0]
// 0089c105  50                   push eax
// 0089c106  e827c9e7ff           call 0x718a32
// 0089c10b  83c404               add esp, 4
// 0089c10e  c705d8e9a40030d28a00 mov dword ptr [0xa4e9d8], 0x8ad230
// 0089c118  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c100(int);
void func_0089c100()
{
    G4_func_0089c100(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
