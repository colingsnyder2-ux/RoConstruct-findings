// roc 2007-08 00778510  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778510
//
// 00778510  a164e08b00           mov eax, dword ptr [0x8be064]
// 00778515  50                   push eax
// 00778516  e84777ebff           call 0x62fc62
// 0077851b  83c404               add esp, 4
// 0077851e  c7054ce08b00b4707800 mov dword ptr [0x8be04c], 0x7870b4
// 00778528  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778510(int);
void func_00778510()
{
    G4_func_00778510(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
