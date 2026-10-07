// roc 2010-06 009e2600  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2600
//
// 009e2600  a17894c100           mov eax, dword ptr [0xc19478]
// 009e2605  50                   push eax
// 009e2606  e88f53dcff           call 0x7a799a
// 009e260b  83c404               add esp, 4
// 009e260e  c7055c94c1001809a000 mov dword ptr [0xc1945c], 0xa00918
// 009e2618  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2600(int);
void func_009e2600()
{
    G4_func_009e2600(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
