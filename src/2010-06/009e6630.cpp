// roc 2010-06 009e6630  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6630
//
// 009e6630  a1fcf6c100           mov eax, dword ptr [0xc1f6fc]
// 009e6635  50                   push eax
// 009e6636  e85f13dcff           call 0x7a799a
// 009e663b  83c404               add esp, 4
// 009e663e  c705e0f6c1001809a000 mov dword ptr [0xc1f6e0], 0xa00918
// 009e6648  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6630(int);
void func_009e6630()
{
    G4_func_009e6630(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
