// roc 2007-08 00777ad0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777ad0
//
// 00777ad0  a158ba8b00           mov eax, dword ptr [0x8bba58]
// 00777ad5  50                   push eax
// 00777ad6  e88781ebff           call 0x62fc62
// 00777adb  83c404               add esp, 4
// 00777ade  c70540ba8b00b4707800 mov dword ptr [0x8bba40], 0x7870b4
// 00777ae8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777ad0(int);
void func_00777ad0()
{
    G4_func_00777ad0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
