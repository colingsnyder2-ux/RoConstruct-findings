// roc 2007-08 0077a440  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a440
//
// 0077a440  a1882e8c00           mov eax, dword ptr [0x8c2e88]
// 0077a445  50                   push eax
// 0077a446  e81758ebff           call 0x62fc62
// 0077a44b  83c404               add esp, 4
// 0077a44e  c705702e8c00b4707800 mov dword ptr [0x8c2e70], 0x7870b4
// 0077a458  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a440(int);
void func_0077a440()
{
    G4_func_0077a440(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
