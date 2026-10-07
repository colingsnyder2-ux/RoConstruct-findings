// roc 2010-06 009e2860  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2860
//
// 009e2860  a1a098c100           mov eax, dword ptr [0xc198a0]
// 009e2865  50                   push eax
// 009e2866  e82f51dcff           call 0x7a799a
// 009e286b  83c404               add esp, 4
// 009e286e  c7058498c1001809a000 mov dword ptr [0xc19884], 0xa00918
// 009e2878  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2860(int);
void func_009e2860()
{
    G4_func_009e2860(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
