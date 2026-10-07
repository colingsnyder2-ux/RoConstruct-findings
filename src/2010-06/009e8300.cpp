// roc 2010-06 009e8300  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8300
//
// 009e8300  a1ac22c200           mov eax, dword ptr [0xc222ac]
// 009e8305  50                   push eax
// 009e8306  e88ff6dbff           call 0x7a799a
// 009e830b  83c404               add esp, 4
// 009e830e  c7059022c2001809a000 mov dword ptr [0xc22290], 0xa00918
// 009e8318  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8300(int);
void func_009e8300()
{
    G4_func_009e8300(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
