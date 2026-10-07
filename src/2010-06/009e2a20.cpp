// roc 2010-06 009e2a20  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2a20
//
// 009e2a20  a1909ac100           mov eax, dword ptr [0xc19a90]
// 009e2a25  50                   push eax
// 009e2a26  e86f4fdcff           call 0x7a799a
// 009e2a2b  83c404               add esp, 4
// 009e2a2e  c705749ac1001809a000 mov dword ptr [0xc19a74], 0xa00918
// 009e2a38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2a20(int);
void func_009e2a20()
{
    G4_func_009e2a20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
