// roc 2007-08 00777c00  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777c00
//
// 00777c00  a14cbc8b00           mov eax, dword ptr [0x8bbc4c]
// 00777c05  50                   push eax
// 00777c06  e85780ebff           call 0x62fc62
// 00777c0b  83c404               add esp, 4
// 00777c0e  c70534bc8b00b4707800 mov dword ptr [0x8bbc34], 0x7870b4
// 00777c18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777c00(int);
void func_00777c00()
{
    G4_func_00777c00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
