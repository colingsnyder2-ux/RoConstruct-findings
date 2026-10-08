// roc 2007-08 0077b9a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b9a0
//
// 0077b9a0  a1fc648c00           mov eax, dword ptr [0x8c64fc]
// 0077b9a5  50                   push eax
// 0077b9a6  e8b742ebff           call 0x62fc62
// 0077b9ab  83c404               add esp, 4
// 0077b9ae  c705e0648c00b4707800 mov dword ptr [0x8c64e0], 0x7870b4
// 0077b9b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b9a0(int);
void func_0077b9a0()
{
    G4_func_0077b9a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
