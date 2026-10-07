// roc 2007-08 0077b240  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b240
//
// 0077b240  a144558c00           mov eax, dword ptr [0x8c5544]
// 0077b245  50                   push eax
// 0077b246  e8174aebff           call 0x62fc62
// 0077b24b  83c404               add esp, 4
// 0077b24e  c7052c558c00b4707800 mov dword ptr [0x8c552c], 0x7870b4
// 0077b258  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b240(int);
void func_0077b240()
{
    G4_func_0077b240(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
