// roc 2010-06 009e7cf0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7cf0
//
// 009e7cf0  a13817c200           mov eax, dword ptr [0xc21738]
// 009e7cf5  50                   push eax
// 009e7cf6  e89ffcdbff           call 0x7a799a
// 009e7cfb  83c404               add esp, 4
// 009e7cfe  c7051817c2001809a000 mov dword ptr [0xc21718], 0xa00918
// 009e7d08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7cf0(int);
void func_009e7cf0()
{
    G4_func_009e7cf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
