// roc 2010-06 009daaa0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009daaa0
//
// 009daaa0  a11806c000           mov eax, dword ptr [0xc00618]
// 009daaa5  50                   push eax
// 009daaa6  e8efcedcff           call 0x7a799a
// 009daaab  83c404               add esp, 4
// 009daaae  c705fc05c0001809a000 mov dword ptr [0xc005fc], 0xa00918
// 009daab8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009daaa0(int);
void func_009daaa0()
{
    G4_func_009daaa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
