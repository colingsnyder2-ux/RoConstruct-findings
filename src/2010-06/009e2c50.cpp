// roc 2010-06 009e2c50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2c50
//
// 009e2c50  a1649dc100           mov eax, dword ptr [0xc19d64]
// 009e2c55  50                   push eax
// 009e2c56  e83f4ddcff           call 0x7a799a
// 009e2c5b  83c404               add esp, 4
// 009e2c5e  c705449dc1001809a000 mov dword ptr [0xc19d44], 0xa00918
// 009e2c68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2c50(int);
void func_009e2c50()
{
    G4_func_009e2c50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
