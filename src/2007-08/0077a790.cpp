// roc 2007-08 0077a790  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a790
//
// 0077a790  a154348c00           mov eax, dword ptr [0x8c3454]
// 0077a795  50                   push eax
// 0077a796  e8c754ebff           call 0x62fc62
// 0077a79b  83c404               add esp, 4
// 0077a79e  c7053c348c00b4707800 mov dword ptr [0x8c343c], 0x7870b4
// 0077a7a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a790(int);
void func_0077a790()
{
    G4_func_0077a790(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
