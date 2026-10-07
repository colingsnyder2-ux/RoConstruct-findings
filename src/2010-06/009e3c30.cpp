// roc 2010-06 009e3c30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3c30
//
// 009e3c30  a1f0b6c100           mov eax, dword ptr [0xc1b6f0]
// 009e3c35  50                   push eax
// 009e3c36  e85f3ddcff           call 0x7a799a
// 009e3c3b  83c404               add esp, 4
// 009e3c3e  c705d4b6c1001809a000 mov dword ptr [0xc1b6d4], 0xa00918
// 009e3c48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3c30(int);
void func_009e3c30()
{
    G4_func_009e3c30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
