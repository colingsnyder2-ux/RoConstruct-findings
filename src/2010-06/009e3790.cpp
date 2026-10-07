// roc 2010-06 009e3790  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3790
//
// 009e3790  a10cb4c100           mov eax, dword ptr [0xc1b40c]
// 009e3795  50                   push eax
// 009e3796  e8ff41dcff           call 0x7a799a
// 009e379b  83c404               add esp, 4
// 009e379e  c705f0b3c1001809a000 mov dword ptr [0xc1b3f0], 0xa00918
// 009e37a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3790(int);
void func_009e3790()
{
    G4_func_009e3790(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
