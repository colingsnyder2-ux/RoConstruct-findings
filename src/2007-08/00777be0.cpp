// roc 2007-08 00777be0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777be0
//
// 00777be0  a1d8bc8b00           mov eax, dword ptr [0x8bbcd8]
// 00777be5  50                   push eax
// 00777be6  e87780ebff           call 0x62fc62
// 00777beb  83c404               add esp, 4
// 00777bee  c705c0bc8b00b4707800 mov dword ptr [0x8bbcc0], 0x7870b4
// 00777bf8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777be0(int);
void func_00777be0()
{
    G4_func_00777be0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
