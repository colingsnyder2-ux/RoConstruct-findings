// roc 2007-08 0077bae0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bae0
//
// 0077bae0  a150648c00           mov eax, dword ptr [0x8c6450]
// 0077bae5  50                   push eax
// 0077bae6  e87741ebff           call 0x62fc62
// 0077baeb  83c404               add esp, 4
// 0077baee  c70538648c00b4707800 mov dword ptr [0x8c6438], 0x7870b4
// 0077baf8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bae0(int);
void func_0077bae0()
{
    G4_func_0077bae0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
