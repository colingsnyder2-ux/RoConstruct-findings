// roc 2007-08 0077c890  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c890
//
// 0077c890  a1b4808c00           mov eax, dword ptr [0x8c80b4]
// 0077c895  50                   push eax
// 0077c896  e8c733ebff           call 0x62fc62
// 0077c89b  83c404               add esp, 4
// 0077c89e  c7059c808c00b4707800 mov dword ptr [0x8c809c], 0x7870b4
// 0077c8a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c890(int);
void func_0077c890()
{
    G4_func_0077c890(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
