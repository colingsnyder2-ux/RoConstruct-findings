// roc 2007-08 00777b30  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777b30
//
// 00777b30  a1acba8b00           mov eax, dword ptr [0x8bbaac]
// 00777b35  50                   push eax
// 00777b36  e82781ebff           call 0x62fc62
// 00777b3b  83c404               add esp, 4
// 00777b3e  c70594ba8b00b4707800 mov dword ptr [0x8bba94], 0x7870b4
// 00777b48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777b30(int);
void func_00777b30()
{
    G4_func_00777b30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
