// roc 2007-08 0077bfd0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bfd0
//
// 0077bfd0  a184778c00           mov eax, dword ptr [0x8c7784]
// 0077bfd5  50                   push eax
// 0077bfd6  e8873cebff           call 0x62fc62
// 0077bfdb  83c404               add esp, 4
// 0077bfde  c70568778c00b4707800 mov dword ptr [0x8c7768], 0x7870b4
// 0077bfe8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bfd0(int);
void func_0077bfd0()
{
    G4_func_0077bfd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
