// roc 2010-06 009e48c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e48c0
//
// 009e48c0  a1b0cdc100           mov eax, dword ptr [0xc1cdb0]
// 009e48c5  50                   push eax
// 009e48c6  e8cf30dcff           call 0x7a799a
// 009e48cb  83c404               add esp, 4
// 009e48ce  c70594cdc1001809a000 mov dword ptr [0xc1cd94], 0xa00918
// 009e48d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e48c0(int);
void func_009e48c0()
{
    G4_func_009e48c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
