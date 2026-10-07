// roc 2010-06 009e7db0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7db0
//
// 009e7db0  a17819c200           mov eax, dword ptr [0xc21978]
// 009e7db5  50                   push eax
// 009e7db6  e8dffbdbff           call 0x7a799a
// 009e7dbb  83c404               add esp, 4
// 009e7dbe  c7055c19c2001809a000 mov dword ptr [0xc2195c], 0xa00918
// 009e7dc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7db0(int);
void func_009e7db0()
{
    G4_func_009e7db0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
