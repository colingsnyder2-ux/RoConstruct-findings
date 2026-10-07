// roc 2007-08 0077c4a0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c4a0
//
// 0077c4a0  a1b87c8c00           mov eax, dword ptr [0x8c7cb8]
// 0077c4a5  50                   push eax
// 0077c4a6  e8b737ebff           call 0x62fc62
// 0077c4ab  83c404               add esp, 4
// 0077c4ae  c705a07c8c00b4707800 mov dword ptr [0x8c7ca0], 0x7870b4
// 0077c4b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c4a0(int);
void func_0077c4a0()
{
    G4_func_0077c4a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
