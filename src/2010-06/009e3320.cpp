// roc 2010-06 009e3320  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3320
//
// 009e3320  a1d4aac100           mov eax, dword ptr [0xc1aad4]
// 009e3325  50                   push eax
// 009e3326  e86f46dcff           call 0x7a799a
// 009e332b  83c404               add esp, 4
// 009e332e  c705b8aac1001809a000 mov dword ptr [0xc1aab8], 0xa00918
// 009e3338  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3320(int);
void func_009e3320()
{
    G4_func_009e3320(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
