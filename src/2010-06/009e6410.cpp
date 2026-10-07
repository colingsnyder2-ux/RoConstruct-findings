// roc 2010-06 009e6410  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6410
//
// 009e6410  a148fac100           mov eax, dword ptr [0xc1fa48]
// 009e6415  50                   push eax
// 009e6416  e87f15dcff           call 0x7a799a
// 009e641b  83c404               add esp, 4
// 009e641e  c70528fac1001809a000 mov dword ptr [0xc1fa28], 0xa00918
// 009e6428  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6410(int);
void func_009e6410()
{
    G4_func_009e6410(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
