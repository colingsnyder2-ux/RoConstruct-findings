// roc 2010-06 009e2f60  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2f60
//
// 009e2f60  a1d4a3c100           mov eax, dword ptr [0xc1a3d4]
// 009e2f65  50                   push eax
// 009e2f66  e82f4adcff           call 0x7a799a
// 009e2f6b  83c404               add esp, 4
// 009e2f6e  c705b8a3c1001809a000 mov dword ptr [0xc1a3b8], 0xa00918
// 009e2f78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2f60(int);
void func_009e2f60()
{
    G4_func_009e2f60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
