// roc 2007-08 0077c130  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c130
//
// 0077c130  a1a0748c00           mov eax, dword ptr [0x8c74a0]
// 0077c135  50                   push eax
// 0077c136  e8273bebff           call 0x62fc62
// 0077c13b  83c404               add esp, 4
// 0077c13e  c70588748c00b4707800 mov dword ptr [0x8c7488], 0x7870b4
// 0077c148  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c130(int);
void func_0077c130()
{
    G4_func_0077c130(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
