// roc 2010-06 009e2f80  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2f80
//
// 009e2f80  a198a4c100           mov eax, dword ptr [0xc1a498]
// 009e2f85  50                   push eax
// 009e2f86  e80f4adcff           call 0x7a799a
// 009e2f8b  83c404               add esp, 4
// 009e2f8e  c70578a4c1001809a000 mov dword ptr [0xc1a478], 0xa00918
// 009e2f98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2f80(int);
void func_009e2f80()
{
    G4_func_009e2f80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
