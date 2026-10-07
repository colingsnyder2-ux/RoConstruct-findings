// roc 2010-06 009db730  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db730
//
// 009db730  a1ac14c000           mov eax, dword ptr [0xc014ac]
// 009db735  50                   push eax
// 009db736  e85fc2dcff           call 0x7a799a
// 009db73b  83c404               add esp, 4
// 009db73e  c7059014c0001809a000 mov dword ptr [0xc01490], 0xa00918
// 009db748  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db730(int);
void func_009db730()
{
    G4_func_009db730(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
