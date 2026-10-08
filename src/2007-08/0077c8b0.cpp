// roc 2007-08 0077c8b0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c8b0
//
// 0077c8b0  a198808c00           mov eax, dword ptr [0x8c8098]
// 0077c8b5  50                   push eax
// 0077c8b6  e8a733ebff           call 0x62fc62
// 0077c8bb  83c404               add esp, 4
// 0077c8be  c70580808c00b4707800 mov dword ptr [0x8c8080], 0x7870b4
// 0077c8c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c8b0(int);
void func_0077c8b0()
{
    G4_func_0077c8b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
