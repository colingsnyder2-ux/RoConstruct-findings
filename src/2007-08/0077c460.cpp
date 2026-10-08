// roc 2007-08 0077c460  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c460
//
// 0077c460  a1c47d8c00           mov eax, dword ptr [0x8c7dc4]
// 0077c465  50                   push eax
// 0077c466  e8f737ebff           call 0x62fc62
// 0077c46b  83c404               add esp, 4
// 0077c46e  c705ac7d8c00b4707800 mov dword ptr [0x8c7dac], 0x7870b4
// 0077c478  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c460(int);
void func_0077c460()
{
    G4_func_0077c460(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
