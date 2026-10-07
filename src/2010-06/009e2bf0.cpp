// roc 2010-06 009e2bf0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2bf0
//
// 009e2bf0  a15c9bc100           mov eax, dword ptr [0xc19b5c]
// 009e2bf5  50                   push eax
// 009e2bf6  e89f4ddcff           call 0x7a799a
// 009e2bfb  83c404               add esp, 4
// 009e2bfe  c705409bc1001809a000 mov dword ptr [0xc19b40], 0xa00918
// 009e2c08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2bf0(int);
void func_009e2bf0()
{
    G4_func_009e2bf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
