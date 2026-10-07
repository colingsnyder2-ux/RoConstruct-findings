// roc 2007-08 0077bc80  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bc80
//
// 0077bc80  a174698c00           mov eax, dword ptr [0x8c6974]
// 0077bc85  50                   push eax
// 0077bc86  e8d73febff           call 0x62fc62
// 0077bc8b  83c404               add esp, 4
// 0077bc8e  c7055c698c00b4707800 mov dword ptr [0x8c695c], 0x7870b4
// 0077bc98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bc80(int);
void func_0077bc80()
{
    G4_func_0077bc80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
