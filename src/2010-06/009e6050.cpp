// roc 2010-06 009e6050  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6050
//
// 009e6050  a11cf0c100           mov eax, dword ptr [0xc1f01c]
// 009e6055  50                   push eax
// 009e6056  e83f19dcff           call 0x7a799a
// 009e605b  83c404               add esp, 4
// 009e605e  c70500f0c1001809a000 mov dword ptr [0xc1f000], 0xa00918
// 009e6068  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6050(int);
void func_009e6050()
{
    G4_func_009e6050(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
