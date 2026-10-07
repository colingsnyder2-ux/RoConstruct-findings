// roc 2010-06 009e5b00  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5b00
//
// 009e5b00  a1a8edc100           mov eax, dword ptr [0xc1eda8]
// 009e5b05  50                   push eax
// 009e5b06  e88f1edcff           call 0x7a799a
// 009e5b0b  83c404               add esp, 4
// 009e5b0e  c7058cedc1001809a000 mov dword ptr [0xc1ed8c], 0xa00918
// 009e5b18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5b00(int);
void func_009e5b00()
{
    G4_func_009e5b00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
