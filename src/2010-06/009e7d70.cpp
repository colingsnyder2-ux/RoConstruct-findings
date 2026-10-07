// roc 2010-06 009e7d70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7d70
//
// 009e7d70  a12c1bc200           mov eax, dword ptr [0xc21b2c]
// 009e7d75  50                   push eax
// 009e7d76  e81ffcdbff           call 0x7a799a
// 009e7d7b  83c404               add esp, 4
// 009e7d7e  c7050c1bc2001809a000 mov dword ptr [0xc21b0c], 0xa00918
// 009e7d88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7d70(int);
void func_009e7d70()
{
    G4_func_009e7d70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
