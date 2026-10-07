// roc 2010-06 009e4cd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4cd0
//
// 009e4cd0  a10cd0c100           mov eax, dword ptr [0xc1d00c]
// 009e4cd5  50                   push eax
// 009e4cd6  e8bf2cdcff           call 0x7a799a
// 009e4cdb  83c404               add esp, 4
// 009e4cde  c705f0cfc1001809a000 mov dword ptr [0xc1cff0], 0xa00918
// 009e4ce8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4cd0(int);
void func_009e4cd0()
{
    G4_func_009e4cd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
