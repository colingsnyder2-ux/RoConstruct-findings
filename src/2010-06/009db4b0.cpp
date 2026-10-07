// roc 2010-06 009db4b0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db4b0
//
// 009db4b0  a14814c000           mov eax, dword ptr [0xc01448]
// 009db4b5  50                   push eax
// 009db4b6  e8dfc4dcff           call 0x7a799a
// 009db4bb  83c404               add esp, 4
// 009db4be  c7052814c0001809a000 mov dword ptr [0xc01428], 0xa00918
// 009db4c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db4b0(int);
void func_009db4b0()
{
    G4_func_009db4b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
