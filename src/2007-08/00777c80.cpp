// roc 2007-08 00777c80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777c80
//
// 00777c80  a14cbd8b00           mov eax, dword ptr [0x8bbd4c]
// 00777c85  50                   push eax
// 00777c86  e8d77febff           call 0x62fc62
// 00777c8b  83c404               add esp, 4
// 00777c8e  c70534bd8b00b4707800 mov dword ptr [0x8bbd34], 0x7870b4
// 00777c98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777c80(int);
void func_00777c80()
{
    G4_func_00777c80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
