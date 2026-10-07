// roc 2010-06 009e6670  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6670
//
// 009e6670  a1fcf5c100           mov eax, dword ptr [0xc1f5fc]
// 009e6675  50                   push eax
// 009e6676  e81f13dcff           call 0x7a799a
// 009e667b  83c404               add esp, 4
// 009e667e  c705e0f5c1001809a000 mov dword ptr [0xc1f5e0], 0xa00918
// 009e6688  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6670(int);
void func_009e6670()
{
    G4_func_009e6670(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
