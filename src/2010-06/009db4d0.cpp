// roc 2010-06 009db4d0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db4d0
//
// 009db4d0  a12014c000           mov eax, dword ptr [0xc01420]
// 009db4d5  50                   push eax
// 009db4d6  e8bfc4dcff           call 0x7a799a
// 009db4db  83c404               add esp, 4
// 009db4de  c7050014c0001809a000 mov dword ptr [0xc01400], 0xa00918
// 009db4e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db4d0(int);
void func_009db4d0()
{
    G4_func_009db4d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
