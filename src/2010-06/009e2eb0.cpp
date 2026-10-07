// roc 2010-06 009e2eb0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2eb0
//
// 009e2eb0  a174a0c100           mov eax, dword ptr [0xc1a074]
// 009e2eb5  50                   push eax
// 009e2eb6  e8df4adcff           call 0x7a799a
// 009e2ebb  83c404               add esp, 4
// 009e2ebe  c70558a0c1001809a000 mov dword ptr [0xc1a058], 0xa00918
// 009e2ec8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2eb0(int);
void func_009e2eb0()
{
    G4_func_009e2eb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
