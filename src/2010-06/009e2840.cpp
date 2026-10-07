// roc 2010-06 009e2840  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2840
//
// 009e2840  a13498c100           mov eax, dword ptr [0xc19834]
// 009e2845  50                   push eax
// 009e2846  e84f51dcff           call 0x7a799a
// 009e284b  83c404               add esp, 4
// 009e284e  c7051898c1001809a000 mov dword ptr [0xc19818], 0xa00918
// 009e2858  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2840(int);
void func_009e2840()
{
    G4_func_009e2840(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
