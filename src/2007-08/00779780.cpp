// roc 2007-08 00779780  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779780
//
// 00779780  a11c188c00           mov eax, dword ptr [0x8c181c]
// 00779785  50                   push eax
// 00779786  e8d764ebff           call 0x62fc62
// 0077978b  83c404               add esp, 4
// 0077978e  c70504188c00b4707800 mov dword ptr [0x8c1804], 0x7870b4
// 00779798  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779780(int);
void func_00779780()
{
    G4_func_00779780(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
