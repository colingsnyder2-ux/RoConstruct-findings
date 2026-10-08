// roc 2007-08 00777b50  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777b50
//
// 00777b50  a190ba8b00           mov eax, dword ptr [0x8bba90]
// 00777b55  50                   push eax
// 00777b56  e80781ebff           call 0x62fc62
// 00777b5b  83c404               add esp, 4
// 00777b5e  c70578ba8b00b4707800 mov dword ptr [0x8bba78], 0x7870b4
// 00777b68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777b50(int);
void func_00777b50()
{
    G4_func_00777b50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
