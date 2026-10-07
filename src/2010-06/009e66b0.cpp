// roc 2010-06 009e66b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e66b0
//
// 009e66b0  a19cf5c100           mov eax, dword ptr [0xc1f59c]
// 009e66b5  50                   push eax
// 009e66b6  e8df12dcff           call 0x7a799a
// 009e66bb  83c404               add esp, 4
// 009e66be  c70580f5c1001809a000 mov dword ptr [0xc1f580], 0xa00918
// 009e66c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e66b0(int);
void func_009e66b0()
{
    G4_func_009e66b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
