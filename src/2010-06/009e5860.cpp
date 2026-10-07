// roc 2010-06 009e5860  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5860
//
// 009e5860  a1d4e7c100           mov eax, dword ptr [0xc1e7d4]
// 009e5865  50                   push eax
// 009e5866  e82f21dcff           call 0x7a799a
// 009e586b  83c404               add esp, 4
// 009e586e  c705b8e7c1001809a000 mov dword ptr [0xc1e7b8], 0xa00918
// 009e5878  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5860(int);
void func_009e5860()
{
    G4_func_009e5860(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
