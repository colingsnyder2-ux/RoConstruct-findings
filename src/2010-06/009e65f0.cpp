// roc 2010-06 009e65f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e65f0
//
// 009e65f0  a1c4f8c100           mov eax, dword ptr [0xc1f8c4]
// 009e65f5  50                   push eax
// 009e65f6  e89f13dcff           call 0x7a799a
// 009e65fb  83c404               add esp, 4
// 009e65fe  c705a8f8c1001809a000 mov dword ptr [0xc1f8a8], 0xa00918
// 009e6608  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e65f0(int);
void func_009e65f0()
{
    G4_func_009e65f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
