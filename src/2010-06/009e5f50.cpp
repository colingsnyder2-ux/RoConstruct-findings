// roc 2010-06 009e5f50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5f50
//
// 009e5f50  a1fcefc100           mov eax, dword ptr [0xc1effc]
// 009e5f55  50                   push eax
// 009e5f56  e83f1adcff           call 0x7a799a
// 009e5f5b  83c404               add esp, 4
// 009e5f5e  c705e0efc1001809a000 mov dword ptr [0xc1efe0], 0xa00918
// 009e5f68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5f50(int);
void func_009e5f50()
{
    G4_func_009e5f50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
