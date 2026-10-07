// roc 2010-06 009e5f10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5f10
//
// 009e5f10  a1a0f1c100           mov eax, dword ptr [0xc1f1a0]
// 009e5f15  50                   push eax
// 009e5f16  e87f1adcff           call 0x7a799a
// 009e5f1b  83c404               add esp, 4
// 009e5f1e  c70584f1c1001809a000 mov dword ptr [0xc1f184], 0xa00918
// 009e5f28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5f10(int);
void func_009e5f10()
{
    G4_func_009e5f10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
