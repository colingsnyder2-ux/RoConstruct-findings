// roc 2007-08 00777c60  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777c60
//
// 00777c60  a168bc8b00           mov eax, dword ptr [0x8bbc68]
// 00777c65  50                   push eax
// 00777c66  e8f77febff           call 0x62fc62
// 00777c6b  83c404               add esp, 4
// 00777c6e  c70550bc8b00b4707800 mov dword ptr [0x8bbc50], 0x7870b4
// 00777c78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777c60(int);
void func_00777c60()
{
    G4_func_00777c60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
