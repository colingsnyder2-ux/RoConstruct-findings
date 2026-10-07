// roc 2010-06 009e2800  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2800
//
// 009e2800  a1b097c100           mov eax, dword ptr [0xc197b0]
// 009e2805  50                   push eax
// 009e2806  e88f51dcff           call 0x7a799a
// 009e280b  83c404               add esp, 4
// 009e280e  c7059497c1001809a000 mov dword ptr [0xc19794], 0xa00918
// 009e2818  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2800(int);
void func_009e2800()
{
    G4_func_009e2800(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
