// roc 2010-06 009e3570  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3570
//
// 009e3570  a1d0acc100           mov eax, dword ptr [0xc1acd0]
// 009e3575  50                   push eax
// 009e3576  e81f44dcff           call 0x7a799a
// 009e357b  83c404               add esp, 4
// 009e357e  c705b0acc1001809a000 mov dword ptr [0xc1acb0], 0xa00918
// 009e3588  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3570(int);
void func_009e3570()
{
    G4_func_009e3570(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
