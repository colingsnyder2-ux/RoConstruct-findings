// roc 2007-08 00778530  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778530
//
// 00778530  a140e18b00           mov eax, dword ptr [0x8be140]
// 00778535  50                   push eax
// 00778536  e82777ebff           call 0x62fc62
// 0077853b  83c404               add esp, 4
// 0077853e  c70528e18b00b4707800 mov dword ptr [0x8be128], 0x7870b4
// 00778548  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778530(int);
void func_00778530()
{
    G4_func_00778530(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
