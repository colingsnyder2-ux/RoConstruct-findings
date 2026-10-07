// roc 2010-06 009e6f10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6f10
//
// 009e6f10  a19c03c200           mov eax, dword ptr [0xc2039c]
// 009e6f15  50                   push eax
// 009e6f16  e87f0adcff           call 0x7a799a
// 009e6f1b  83c404               add esp, 4
// 009e6f1e  c7058003c2001809a000 mov dword ptr [0xc20380], 0xa00918
// 009e6f28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6f10(int);
void func_009e6f10()
{
    G4_func_009e6f10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
