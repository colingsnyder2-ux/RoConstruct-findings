// roc 2010-06 009e4bb0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4bb0
//
// 009e4bb0  a1d4d9c100           mov eax, dword ptr [0xc1d9d4]
// 009e4bb5  50                   push eax
// 009e4bb6  e8df2ddcff           call 0x7a799a
// 009e4bbb  83c404               add esp, 4
// 009e4bbe  c705b8d9c1001809a000 mov dword ptr [0xc1d9b8], 0xa00918
// 009e4bc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4bb0(int);
void func_009e4bb0()
{
    G4_func_009e4bb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
