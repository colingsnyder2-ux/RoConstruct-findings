// roc 2007-08 0077c870  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c870
//
// 0077c870  a154818c00           mov eax, dword ptr [0x8c8154]
// 0077c875  50                   push eax
// 0077c876  e8e733ebff           call 0x62fc62
// 0077c87b  83c404               add esp, 4
// 0077c87e  c70538818c00b4707800 mov dword ptr [0x8c8138], 0x7870b4
// 0077c888  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c870(int);
void func_0077c870()
{
    G4_func_0077c870(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
