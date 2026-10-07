// roc 2009-06 00894620  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894620
//
// 00894620  a1e8afa300           mov eax, dword ptr [0xa3afe8]
// 00894625  50                   push eax
// 00894626  e80744e8ff           call 0x718a32
// 0089462b  83c404               add esp, 4
// 0089462e  c705d0afa30030d28a00 mov dword ptr [0xa3afd0], 0x8ad230
// 00894638  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894620(int);
void func_00894620()
{
    G4_func_00894620(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
