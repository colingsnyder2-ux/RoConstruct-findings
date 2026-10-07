// roc 2010-06 009db5b0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db5b0
//
// 009db5b0  a13015c000           mov eax, dword ptr [0xc01530]
// 009db5b5  50                   push eax
// 009db5b6  e8dfc3dcff           call 0x7a799a
// 009db5bb  83c404               add esp, 4
// 009db5be  c7051015c0001809a000 mov dword ptr [0xc01510], 0xa00918
// 009db5c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db5b0(int);
void func_009db5b0()
{
    G4_func_009db5b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
