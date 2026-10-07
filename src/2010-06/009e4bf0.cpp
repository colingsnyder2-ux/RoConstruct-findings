// roc 2010-06 009e4bf0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4bf0
//
// 009e4bf0  a1f4d5c100           mov eax, dword ptr [0xc1d5f4]
// 009e4bf5  50                   push eax
// 009e4bf6  e89f2ddcff           call 0x7a799a
// 009e4bfb  83c404               add esp, 4
// 009e4bfe  c705d8d5c1001809a000 mov dword ptr [0xc1d5d8], 0xa00918
// 009e4c08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4bf0(int);
void func_009e4bf0()
{
    G4_func_009e4bf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
