// roc 2007-08 00779760  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779760
//
// 00779760  a1ac168c00           mov eax, dword ptr [0x8c16ac]
// 00779765  50                   push eax
// 00779766  e8f764ebff           call 0x62fc62
// 0077976b  83c404               add esp, 4
// 0077976e  c70594168c00b4707800 mov dword ptr [0x8c1694], 0x7870b4
// 00779778  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779760(int);
void func_00779760()
{
    G4_func_00779760(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
