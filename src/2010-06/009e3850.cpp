// roc 2010-06 009e3850  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3850
//
// 009e3850  a1ccb3c100           mov eax, dword ptr [0xc1b3cc]
// 009e3855  50                   push eax
// 009e3856  e83f41dcff           call 0x7a799a
// 009e385b  83c404               add esp, 4
// 009e385e  c705b0b3c1001809a000 mov dword ptr [0xc1b3b0], 0xa00918
// 009e3868  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3850(int);
void func_009e3850()
{
    G4_func_009e3850(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
