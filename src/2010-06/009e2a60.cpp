// roc 2010-06 009e2a60  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2a60
//
// 009e2a60  a12c9bc100           mov eax, dword ptr [0xc19b2c]
// 009e2a65  50                   push eax
// 009e2a66  e82f4fdcff           call 0x7a799a
// 009e2a6b  83c404               add esp, 4
// 009e2a6e  c705109bc1001809a000 mov dword ptr [0xc19b10], 0xa00918
// 009e2a78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2a60(int);
void func_009e2a60()
{
    G4_func_009e2a60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
