// roc 2007-08 0077b1c0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b1c0
//
// 0077b1c0  a128558c00           mov eax, dword ptr [0x8c5528]
// 0077b1c5  50                   push eax
// 0077b1c6  e8974aebff           call 0x62fc62
// 0077b1cb  83c404               add esp, 4
// 0077b1ce  c70510558c00b4707800 mov dword ptr [0x8c5510], 0x7870b4
// 0077b1d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b1c0(int);
void func_0077b1c0()
{
    G4_func_0077b1c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
