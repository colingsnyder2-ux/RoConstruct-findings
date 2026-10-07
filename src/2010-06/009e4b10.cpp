// roc 2010-06 009e4b10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4b10
//
// 009e4b10  a1f8d9c100           mov eax, dword ptr [0xc1d9f8]
// 009e4b15  50                   push eax
// 009e4b16  e87f2edcff           call 0x7a799a
// 009e4b1b  83c404               add esp, 4
// 009e4b1e  c705d8d9c1001809a000 mov dword ptr [0xc1d9d8], 0xa00918
// 009e4b28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4b10(int);
void func_009e4b10()
{
    G4_func_009e4b10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
