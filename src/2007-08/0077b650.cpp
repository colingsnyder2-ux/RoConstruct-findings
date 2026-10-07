// roc 2007-08 0077b650  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b650
//
// 0077b650  a1385e8c00           mov eax, dword ptr [0x8c5e38]
// 0077b655  50                   push eax
// 0077b656  e80746ebff           call 0x62fc62
// 0077b65b  83c404               add esp, 4
// 0077b65e  c7051c5e8c00b4707800 mov dword ptr [0x8c5e1c], 0x7870b4
// 0077b668  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b650(int);
void func_0077b650()
{
    G4_func_0077b650(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
