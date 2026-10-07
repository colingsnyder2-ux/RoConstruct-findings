// roc 2010-06 009db6f0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db6f0
//
// 009db6f0  a16c14c000           mov eax, dword ptr [0xc0146c]
// 009db6f5  50                   push eax
// 009db6f6  e89fc2dcff           call 0x7a799a
// 009db6fb  83c404               add esp, 4
// 009db6fe  c7055014c0001809a000 mov dword ptr [0xc01450], 0xa00918
// 009db708  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db6f0(int);
void func_009db6f0()
{
    G4_func_009db6f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
