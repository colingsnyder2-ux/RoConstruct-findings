// roc 2010-06 009e2980  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2980
//
// 009e2980  a1509ac100           mov eax, dword ptr [0xc19a50]
// 009e2985  50                   push eax
// 009e2986  e80f50dcff           call 0x7a799a
// 009e298b  83c404               add esp, 4
// 009e298e  c705349ac1001809a000 mov dword ptr [0xc19a34], 0xa00918
// 009e2998  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2980(int);
void func_009e2980()
{
    G4_func_009e2980(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
