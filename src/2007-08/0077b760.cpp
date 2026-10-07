// roc 2007-08 0077b760  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b760
//
// 0077b760  a144608c00           mov eax, dword ptr [0x8c6044]
// 0077b765  50                   push eax
// 0077b766  e8f744ebff           call 0x62fc62
// 0077b76b  83c404               add esp, 4
// 0077b76e  c7052c608c00b4707800 mov dword ptr [0x8c602c], 0x7870b4
// 0077b778  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b760(int);
void func_0077b760()
{
    G4_func_0077b760(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
