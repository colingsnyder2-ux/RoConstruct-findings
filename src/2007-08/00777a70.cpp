// roc 2007-08 00777a70  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777a70
//
// 00777a70  a174ba8b00           mov eax, dword ptr [0x8bba74]
// 00777a75  50                   push eax
// 00777a76  e8e781ebff           call 0x62fc62
// 00777a7b  83c404               add esp, 4
// 00777a7e  c7055cba8b00b4707800 mov dword ptr [0x8bba5c], 0x7870b4
// 00777a88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777a70(int);
void func_00777a70()
{
    G4_func_00777a70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
