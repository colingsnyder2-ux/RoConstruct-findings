// roc 2010-06 009db3f0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db3f0
//
// 009db3f0  a19016c000           mov eax, dword ptr [0xc01690]
// 009db3f5  50                   push eax
// 009db3f6  e89fc5dcff           call 0x7a799a
// 009db3fb  83c404               add esp, 4
// 009db3fe  c7057016c0001809a000 mov dword ptr [0xc01670], 0xa00918
// 009db408  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db3f0(int);
void func_009db3f0()
{
    G4_func_009db3f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
