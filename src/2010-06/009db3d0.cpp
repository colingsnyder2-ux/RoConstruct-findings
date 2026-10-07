// roc 2010-06 009db3d0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db3d0
//
// 009db3d0  a16816c000           mov eax, dword ptr [0xc01668]
// 009db3d5  50                   push eax
// 009db3d6  e8bfc5dcff           call 0x7a799a
// 009db3db  83c404               add esp, 4
// 009db3de  c7054816c0001809a000 mov dword ptr [0xc01648], 0xa00918
// 009db3e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db3d0(int);
void func_009db3d0()
{
    G4_func_009db3d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
