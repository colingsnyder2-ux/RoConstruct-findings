// roc 2010-06 009e2e90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2e90
//
// 009e2e90  a1d8a0c100           mov eax, dword ptr [0xc1a0d8]
// 009e2e95  50                   push eax
// 009e2e96  e8ff4adcff           call 0x7a799a
// 009e2e9b  83c404               add esp, 4
// 009e2e9e  c705bca0c1001809a000 mov dword ptr [0xc1a0bc], 0xa00918
// 009e2ea8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2e90(int);
void func_009e2e90()
{
    G4_func_009e2e90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
