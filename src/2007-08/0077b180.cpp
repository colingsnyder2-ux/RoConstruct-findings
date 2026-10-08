// roc 2007-08 0077b180  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b180
//
// 0077b180  a124568c00           mov eax, dword ptr [0x8c5624]
// 0077b185  50                   push eax
// 0077b186  e8d74aebff           call 0x62fc62
// 0077b18b  83c404               add esp, 4
// 0077b18e  c7050c568c00b4707800 mov dword ptr [0x8c560c], 0x7870b4
// 0077b198  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b180(int);
void func_0077b180()
{
    G4_func_0077b180(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
