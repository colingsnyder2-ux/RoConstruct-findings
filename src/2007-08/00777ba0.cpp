// roc 2007-08 00777ba0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777ba0
//
// 00777ba0  a1bcbc8b00           mov eax, dword ptr [0x8bbcbc]
// 00777ba5  50                   push eax
// 00777ba6  e8b780ebff           call 0x62fc62
// 00777bab  83c404               add esp, 4
// 00777bae  c705a4bc8b00b4707800 mov dword ptr [0x8bbca4], 0x7870b4
// 00777bb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777ba0(int);
void func_00777ba0()
{
    G4_func_00777ba0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
