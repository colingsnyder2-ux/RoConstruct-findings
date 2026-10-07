// roc 2010-06 009e4440  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4440
//
// 009e4440  a1d4cbc100           mov eax, dword ptr [0xc1cbd4]
// 009e4445  50                   push eax
// 009e4446  e84f35dcff           call 0x7a799a
// 009e444b  83c404               add esp, 4
// 009e444e  c705b8cbc1001809a000 mov dword ptr [0xc1cbb8], 0xa00918
// 009e4458  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4440(int);
void func_009e4440()
{
    G4_func_009e4440(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
