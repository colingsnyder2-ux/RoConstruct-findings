// roc 2010-06 009e7320  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7320
//
// 009e7320  a14c08c200           mov eax, dword ptr [0xc2084c]
// 009e7325  50                   push eax
// 009e7326  e86f06dcff           call 0x7a799a
// 009e732b  83c404               add esp, 4
// 009e732e  c7053008c2001809a000 mov dword ptr [0xc20830], 0xa00918
// 009e7338  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7320(int);
void func_009e7320()
{
    G4_func_009e7320(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
