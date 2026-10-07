// roc 2007-08 0077b8e0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b8e0
//
// 0077b8e0  a1a4648c00           mov eax, dword ptr [0x8c64a4]
// 0077b8e5  50                   push eax
// 0077b8e6  e87743ebff           call 0x62fc62
// 0077b8eb  83c404               add esp, 4
// 0077b8ee  c7058c648c00b4707800 mov dword ptr [0x8c648c], 0x7870b4
// 0077b8f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b8e0(int);
void func_0077b8e0()
{
    G4_func_0077b8e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
