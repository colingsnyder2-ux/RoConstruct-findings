// roc 2010-06 009e64b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e64b0
//
// 009e64b0  a1bcf6c100           mov eax, dword ptr [0xc1f6bc]
// 009e64b5  50                   push eax
// 009e64b6  e8df14dcff           call 0x7a799a
// 009e64bb  83c404               add esp, 4
// 009e64be  c705a0f6c1001809a000 mov dword ptr [0xc1f6a0], 0xa00918
// 009e64c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e64b0(int);
void func_009e64b0()
{
    G4_func_009e64b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
