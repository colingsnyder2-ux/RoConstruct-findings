// roc 2010-06 009e59e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e59e0
//
// 009e59e0  a1b0e9c100           mov eax, dword ptr [0xc1e9b0]
// 009e59e5  50                   push eax
// 009e59e6  e8af1fdcff           call 0x7a799a
// 009e59eb  83c404               add esp, 4
// 009e59ee  c70594e9c1001809a000 mov dword ptr [0xc1e994], 0xa00918
// 009e59f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e59e0(int);
void func_009e59e0()
{
    G4_func_009e59e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
