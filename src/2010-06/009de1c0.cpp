// roc 2010-06 009de1c0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de1c0
//
// 009de1c0  a188aec000           mov eax, dword ptr [0xc0ae88]
// 009de1c5  50                   push eax
// 009de1c6  e8cf97dcff           call 0x7a799a
// 009de1cb  83c404               add esp, 4
// 009de1ce  c7056caec0001809a000 mov dword ptr [0xc0ae6c], 0xa00918
// 009de1d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de1c0(int);
void func_009de1c0()
{
    G4_func_009de1c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
