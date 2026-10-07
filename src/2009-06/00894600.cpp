// roc 2009-06 00894600  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894600
//
// 00894600  a1ccafa300           mov eax, dword ptr [0xa3afcc]
// 00894605  50                   push eax
// 00894606  e82744e8ff           call 0x718a32
// 0089460b  83c404               add esp, 4
// 0089460e  c705b4afa30030d28a00 mov dword ptr [0xa3afb4], 0x8ad230
// 00894618  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894600(int);
void func_00894600()
{
    G4_func_00894600(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
