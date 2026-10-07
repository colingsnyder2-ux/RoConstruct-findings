// roc 2010-06 009e2a00  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2a00
//
// 009e2a00  a1709ac100           mov eax, dword ptr [0xc19a70]
// 009e2a05  50                   push eax
// 009e2a06  e88f4fdcff           call 0x7a799a
// 009e2a0b  83c404               add esp, 4
// 009e2a0e  c705549ac1001809a000 mov dword ptr [0xc19a54], 0xa00918
// 009e2a18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2a00(int);
void func_009e2a00()
{
    G4_func_009e2a00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
