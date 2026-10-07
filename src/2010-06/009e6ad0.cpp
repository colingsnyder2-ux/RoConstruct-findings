// roc 2010-06 009e6ad0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6ad0
//
// 009e6ad0  a184fcc100           mov eax, dword ptr [0xc1fc84]
// 009e6ad5  50                   push eax
// 009e6ad6  e8bf0edcff           call 0x7a799a
// 009e6adb  83c404               add esp, 4
// 009e6ade  c70568fcc1001809a000 mov dword ptr [0xc1fc68], 0xa00918
// 009e6ae8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6ad0(int);
void func_009e6ad0()
{
    G4_func_009e6ad0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
