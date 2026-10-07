// roc 2009-06 00896ea0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896ea0
//
// 00896ea0  a1e837a400           mov eax, dword ptr [0xa437e8]
// 00896ea5  50                   push eax
// 00896ea6  e8871be8ff           call 0x718a32
// 00896eab  83c404               add esp, 4
// 00896eae  c705d037a40030d28a00 mov dword ptr [0xa437d0], 0x8ad230
// 00896eb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896ea0(int);
void func_00896ea0()
{
    G4_func_00896ea0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
