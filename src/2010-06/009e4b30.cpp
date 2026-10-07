// roc 2010-06 009e4b30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4b30
//
// 009e4b30  a1c4d2c100           mov eax, dword ptr [0xc1d2c4]
// 009e4b35  50                   push eax
// 009e4b36  e85f2edcff           call 0x7a799a
// 009e4b3b  83c404               add esp, 4
// 009e4b3e  c705a4d2c1001809a000 mov dword ptr [0xc1d2a4], 0xa00918
// 009e4b48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4b30(int);
void func_009e4b30()
{
    G4_func_009e4b30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
