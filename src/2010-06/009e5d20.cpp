// roc 2010-06 009e5d20  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5d20
//
// 009e5d20  a170ebc100           mov eax, dword ptr [0xc1eb70]
// 009e5d25  50                   push eax
// 009e5d26  e86f1cdcff           call 0x7a799a
// 009e5d2b  83c404               add esp, 4
// 009e5d2e  c70554ebc1001809a000 mov dword ptr [0xc1eb54], 0xa00918
// 009e5d38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5d20(int);
void func_009e5d20()
{
    G4_func_009e5d20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
