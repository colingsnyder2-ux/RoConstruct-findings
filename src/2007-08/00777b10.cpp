// roc 2007-08 00777b10  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777b10
//
// 00777b10  a1c8ba8b00           mov eax, dword ptr [0x8bbac8]
// 00777b15  50                   push eax
// 00777b16  e84781ebff           call 0x62fc62
// 00777b1b  83c404               add esp, 4
// 00777b1e  c705b0ba8b00b4707800 mov dword ptr [0x8bbab0], 0x7870b4
// 00777b28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777b10(int);
void func_00777b10()
{
    G4_func_00777b10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
