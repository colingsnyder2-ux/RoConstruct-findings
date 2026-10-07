// roc 2009-06 00897100  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897100
//
// 00897100  a1f039a400           mov eax, dword ptr [0xa439f0]
// 00897105  50                   push eax
// 00897106  e82719e8ff           call 0x718a32
// 0089710b  83c404               add esp, 4
// 0089710e  c705d839a40030d28a00 mov dword ptr [0xa439d8], 0x8ad230
// 00897118  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897100(int);
void func_00897100()
{
    G4_func_00897100(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
