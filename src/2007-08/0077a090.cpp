// roc 2007-08 0077a090  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a090
//
// 0077a090  a1d02a8c00           mov eax, dword ptr [0x8c2ad0]
// 0077a095  50                   push eax
// 0077a096  e8c75bebff           call 0x62fc62
// 0077a09b  83c404               add esp, 4
// 0077a09e  c705b82a8c00b4707800 mov dword ptr [0x8c2ab8], 0x7870b4
// 0077a0a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a090(int);
void func_0077a090()
{
    G4_func_0077a090(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
