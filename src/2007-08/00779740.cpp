// roc 2007-08 00779740  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779740
//
// 00779740  a154188c00           mov eax, dword ptr [0x8c1854]
// 00779745  50                   push eax
// 00779746  e81765ebff           call 0x62fc62
// 0077974b  83c404               add esp, 4
// 0077974e  c7053c188c00b4707800 mov dword ptr [0x8c183c], 0x7870b4
// 00779758  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779740(int);
void func_00779740()
{
    G4_func_00779740(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
