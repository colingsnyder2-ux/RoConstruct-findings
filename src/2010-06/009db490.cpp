// roc 2010-06 009db490  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db490
//
// 009db490  a15817c000           mov eax, dword ptr [0xc01758]
// 009db495  50                   push eax
// 009db496  e8ffc4dcff           call 0x7a799a
// 009db49b  83c404               add esp, 4
// 009db49e  c7053817c0001809a000 mov dword ptr [0xc01738], 0xa00918
// 009db4a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db490(int);
void func_009db490()
{
    G4_func_009db490(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
