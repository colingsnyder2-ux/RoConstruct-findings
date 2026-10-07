// roc 2010-06 009e7890  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7890
//
// 009e7890  a1980fc200           mov eax, dword ptr [0xc20f98]
// 009e7895  50                   push eax
// 009e7896  e8ff00dcff           call 0x7a799a
// 009e789b  83c404               add esp, 4
// 009e789e  c705780fc2001809a000 mov dword ptr [0xc20f78], 0xa00918
// 009e78a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7890(int);
void func_009e7890()
{
    G4_func_009e7890(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
