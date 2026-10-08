// roc 2007-08 0077baa0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077baa0
//
// 0077baa0  a1dc648c00           mov eax, dword ptr [0x8c64dc]
// 0077baa5  50                   push eax
// 0077baa6  e8b741ebff           call 0x62fc62
// 0077baab  83c404               add esp, 4
// 0077baae  c705c0648c00b4707800 mov dword ptr [0x8c64c0], 0x7870b4
// 0077bab8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077baa0(int);
void func_0077baa0()
{
    G4_func_0077baa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
