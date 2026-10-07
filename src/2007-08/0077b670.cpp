// roc 2007-08 0077b670  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b670
//
// 0077b670  a1f85d8c00           mov eax, dword ptr [0x8c5df8]
// 0077b675  50                   push eax
// 0077b676  e8e745ebff           call 0x62fc62
// 0077b67b  83c404               add esp, 4
// 0077b67e  c705e05d8c00b4707800 mov dword ptr [0x8c5de0], 0x7870b4
// 0077b688  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b670(int);
void func_0077b670()
{
    G4_func_0077b670(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
