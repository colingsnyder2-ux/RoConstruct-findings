// roc 2007-08 0077b780  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b780
//
// 0077b780  a1f05f8c00           mov eax, dword ptr [0x8c5ff0]
// 0077b785  50                   push eax
// 0077b786  e8d744ebff           call 0x62fc62
// 0077b78b  83c404               add esp, 4
// 0077b78e  c705d85f8c00b4707800 mov dword ptr [0x8c5fd8], 0x7870b4
// 0077b798  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b780(int);
void func_0077b780()
{
    G4_func_0077b780(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
