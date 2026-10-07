// roc 2007-08 0077bac0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bac0
//
// 0077bac0  a164628c00           mov eax, dword ptr [0x8c6264]
// 0077bac5  50                   push eax
// 0077bac6  e89741ebff           call 0x62fc62
// 0077bacb  83c404               add esp, 4
// 0077bace  c70548628c00b4707800 mov dword ptr [0x8c6248], 0x7870b4
// 0077bad8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bac0(int);
void func_0077bac0()
{
    G4_func_0077bac0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
