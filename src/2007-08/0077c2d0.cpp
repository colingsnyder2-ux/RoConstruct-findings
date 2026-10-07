// roc 2007-08 0077c2d0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c2d0
//
// 0077c2d0  a148778c00           mov eax, dword ptr [0x8c7748]
// 0077c2d5  50                   push eax
// 0077c2d6  e88739ebff           call 0x62fc62
// 0077c2db  83c404               add esp, 4
// 0077c2de  c70530778c00b4707800 mov dword ptr [0x8c7730], 0x7870b4
// 0077c2e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c2d0(int);
void func_0077c2d0()
{
    G4_func_0077c2d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
