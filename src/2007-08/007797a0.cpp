// roc 2007-08 007797a0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007797a0
//
// 007797a0  a1c8188c00           mov eax, dword ptr [0x8c18c8]
// 007797a5  50                   push eax
// 007797a6  e8b764ebff           call 0x62fc62
// 007797ab  83c404               add esp, 4
// 007797ae  c705b0188c00b4707800 mov dword ptr [0x8c18b0], 0x7870b4
// 007797b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007797a0(int);
void func_007797a0()
{
    G4_func_007797a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
