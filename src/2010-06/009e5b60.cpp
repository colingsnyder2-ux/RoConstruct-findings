// roc 2010-06 009e5b60  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5b60
//
// 009e5b60  a134ebc100           mov eax, dword ptr [0xc1eb34]
// 009e5b65  50                   push eax
// 009e5b66  e82f1edcff           call 0x7a799a
// 009e5b6b  83c404               add esp, 4
// 009e5b6e  c70514ebc1001809a000 mov dword ptr [0xc1eb14], 0xa00918
// 009e5b78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5b60(int);
void func_009e5b60()
{
    G4_func_009e5b60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
