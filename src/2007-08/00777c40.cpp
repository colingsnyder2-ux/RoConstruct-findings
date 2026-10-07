// roc 2007-08 00777c40  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777c40
//
// 00777c40  a184bc8b00           mov eax, dword ptr [0x8bbc84]
// 00777c45  50                   push eax
// 00777c46  e81780ebff           call 0x62fc62
// 00777c4b  83c404               add esp, 4
// 00777c4e  c7056cbc8b00b4707800 mov dword ptr [0x8bbc6c], 0x7870b4
// 00777c58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777c40(int);
void func_00777c40()
{
    G4_func_00777c40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
