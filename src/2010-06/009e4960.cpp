// roc 2010-06 009e4960  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4960
//
// 009e4960  a110cec100           mov eax, dword ptr [0xc1ce10]
// 009e4965  50                   push eax
// 009e4966  e82f30dcff           call 0x7a799a
// 009e496b  83c404               add esp, 4
// 009e496e  c705f4cdc1001809a000 mov dword ptr [0xc1cdf4], 0xa00918
// 009e4978  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4960(int);
void func_009e4960()
{
    G4_func_009e4960(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
