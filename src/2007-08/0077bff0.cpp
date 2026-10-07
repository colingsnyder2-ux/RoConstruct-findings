// roc 2007-08 0077bff0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bff0
//
// 0077bff0  a14c748c00           mov eax, dword ptr [0x8c744c]
// 0077bff5  50                   push eax
// 0077bff6  e8673cebff           call 0x62fc62
// 0077bffb  83c404               add esp, 4
// 0077bffe  c70534748c00b4707800 mov dword ptr [0x8c7434], 0x7870b4
// 0077c008  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bff0(int);
void func_0077bff0()
{
    G4_func_0077bff0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
