// roc 2007-08 007793c0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007793c0
//
// 007793c0  a1700e8c00           mov eax, dword ptr [0x8c0e70]
// 007793c5  50                   push eax
// 007793c6  e89768ebff           call 0x62fc62
// 007793cb  83c404               add esp, 4
// 007793ce  c705540e8c00b4707800 mov dword ptr [0x8c0e54], 0x7870b4
// 007793d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007793c0(int);
void func_007793c0()
{
    G4_func_007793c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
