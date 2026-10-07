// roc 2010-06 009e4400  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4400
//
// 009e4400  a19cc7c100           mov eax, dword ptr [0xc1c79c]
// 009e4405  50                   push eax
// 009e4406  e88f35dcff           call 0x7a799a
// 009e440b  83c404               add esp, 4
// 009e440e  c70580c7c1001809a000 mov dword ptr [0xc1c780], 0xa00918
// 009e4418  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4400(int);
void func_009e4400()
{
    G4_func_009e4400(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
