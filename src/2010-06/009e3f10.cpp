// roc 2010-06 009e3f10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3f10
//
// 009e3f10  a198c1c100           mov eax, dword ptr [0xc1c198]
// 009e3f15  50                   push eax
// 009e3f16  e87f3adcff           call 0x7a799a
// 009e3f1b  83c404               add esp, 4
// 009e3f1e  c70578c1c1001809a000 mov dword ptr [0xc1c178], 0xa00918
// 009e3f28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3f10(int);
void func_009e3f10()
{
    G4_func_009e3f10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
