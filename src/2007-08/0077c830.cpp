// roc 2007-08 0077c830  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c830
//
// 0077c830  a1447f8c00           mov eax, dword ptr [0x8c7f44]
// 0077c835  50                   push eax
// 0077c836  e82734ebff           call 0x62fc62
// 0077c83b  83c404               add esp, 4
// 0077c83e  c7052c7f8c00b4707800 mov dword ptr [0x8c7f2c], 0x7870b4
// 0077c848  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c830(int);
void func_0077c830()
{
    G4_func_0077c830(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
